/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:25:01 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/22 17:49:29 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		begin;
	int		end;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	end = i - 1;
	begin = 0;
	while (begin < end)
	{
		tmp = str[begin];
		str[begin] = str[end];
		str[end] = tmp;
		begin++;
		end--;
	}
	return (str);
}
