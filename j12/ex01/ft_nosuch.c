/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nosuch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 15:36:30 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/19 17:49:46 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nosuch(char *file, int no)
{
	if (no)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": ");
		ft_putstr("No such file or directory\n");
	}
}
