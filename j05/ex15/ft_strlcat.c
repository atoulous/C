/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 11:19:59 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/29 16:17:05 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i > size)
		return (i + j - (i - size));
	k = i;
	while (src[l] != '\0' && k + 1 < size)
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (i + j);
}
