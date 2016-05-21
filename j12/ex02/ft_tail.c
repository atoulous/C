/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 19:04:20 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/22 14:44:57 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char *argv[])
{
	int		end;
	int		i;
	int		j;

	i = 3;
	j = 0;
	end = ft_atoi(argv[2]);
	while (argv[i])
	{
		if (argc > 4)
		{
			if (j++)
				ft_putchar('\n');
			ft_putstr("==> ");
			ft_putstr(argv[i]);
			ft_putstr(" <==\n");
		}
		ft_tail(argv[i], end);
		i++;
	}
	return (0);
}

int		ft_size(char *str)
{
	char	temp;
	int		i;
	int		fd;

	i = 0;
	fd = open(str, O_RDONLY);
	while (read(fd, &temp, 1))
		i++;
	close(fd);
	return (i);
}

void	ft_tail(char *str, int end)
{
	char	c;
	int		fd;
	int		lenght;
	int		i;

	i = 0;
	lenght = ft_size(str);
	fd = open(str, O_RDONLY);
	while (read(fd, &c, 1))
	{
		if (i >= lenght - end)
			ft_putchar(c);
		i++;
	}
	close(fd);
}
