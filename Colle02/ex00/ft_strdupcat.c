/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 12:03:38 by thifranc          #+#    #+#             */
/*   Updated: 2015/11/01 22:05:57 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdupcat(char *dest, char *src, int ct)
{
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (ct * 10 + 1));
	while (src[i] != '\0')
	{
		dest[i + ((ct - 1) * 10) ] = src[i];
		i++;
	}
	return (dest);
}
