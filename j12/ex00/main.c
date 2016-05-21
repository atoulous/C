/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 22:47:24 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/19 12:36:42 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.\n");
		if (ac > 2)
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		if (ft_display_file(av[1]) == 1)
			return (1);
		return (0);
	}
}
