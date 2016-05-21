/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 14:25:16 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/18 17:02:40 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *begin_list;

	list = 0;
	begin_list = 0;
	if (ac > 0)
	{
		begin_list = ft_create_elem((void*)*(av + (ac - 1)));
		list = begin_list;
		ac--;
		while (ac > 0)
		{
			list->next = ft_create_elem((void*)*(av + (ac - 1)));
			list = list->next;
			ac--;
		}
	}
	return (begin_list);
}
