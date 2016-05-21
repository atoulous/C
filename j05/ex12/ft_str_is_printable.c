/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 11:18:36 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/29 16:19:07 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] > 32) && (str[i] < 127))
			j++;
		i++;
	}
	if (str[0] == '\0')
		return (1);
	if (i == j)
		return (1);
	else
		return (0);
}
