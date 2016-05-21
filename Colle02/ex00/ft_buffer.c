/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 21:14:50 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/01 21:43:34 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "my_functions.h"

char	*ft_buffer(void)
{
	int		ct;
	int		n;
	char	buf[10];
	char	*temp;
	char	*ret;

	n = 10;
	ct = 1;
	temp = NULL;
	temp[0] = '\0';
	while (n == 10)
	{
		read(0, buf, 10);
		n = read(0, buf, 10);
		ret = (char*)malloc(sizeof(char) * ((10 * ct) + 1));
		ft_strcpy(ret, temp);
		ft_strcat(ret, buf);
		temp = ft_strdup(ret);
		ct++;
		free(buf);
		free(ret);
	}
	temp[(10 * ct) + 1] = '\0';
	return (ret);
}
