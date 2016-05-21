/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:02:49 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/18 17:20:52 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*tmp;

	if (begin_list)
	{
		elem = *begin_list;
		while (elem)
		{
			tmp = elem;
			elem = elem->next;
			free(tmp);
		}
	}
	*begin_list = NULL;
}
