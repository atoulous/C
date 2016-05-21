/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 18:58:54 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/29 16:21:59 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if ((str[i] == str[0]) && ((str[i] >= 'a') && (str[i] <= 'z')))
		str[i] = str[i] - 32;
	while (str[++i])
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
	i = 1;
	while (str[i])
	{
		while (((str[i] > 31) && (str[i] < 48))
				|| ((str[i] > 57) && (str[i] < 65))
				|| ((str[i] > 90) && (str[i] < 97))
				|| ((str[i] > 122) && (str[i] < 127)))
		{
			i = i + 1;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
