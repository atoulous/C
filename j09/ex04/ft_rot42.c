/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:20:04 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/23 16:26:18 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] < 'k'))
			str[a] = str[a] + 16;
		else if ((str[a] > 'k') && (str[a] <= 'z'))
			str[a] = str[a] - 10;
		if ((str[a] >= 'A') && (str[a] < 'K'))
			str[a] = str[a] + 16;
		else if ((str[a] > 'K') && (str[a] <= 'Z'))
			str[a] = str[a] - 10;
		a++;
	}
	return (str);
}
