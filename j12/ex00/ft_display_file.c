/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 21:19:40 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/19 12:29:10 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_display_file(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		len;
	int		fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
