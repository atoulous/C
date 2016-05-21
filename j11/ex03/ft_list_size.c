/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 13:49:40 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/17 14:02:37 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		nb;
	t_list	*elem;

	nb = 0;
	elem = begin_list;
	while (elem != NULL)
	{
		elem = elem->next;
		nb++;
	}
	return (nb);
}
