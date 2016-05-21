/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 16:18:42 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/12 13:29:47 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *elem;

	elem = NULL;
	elem = malloc(sizeof(elem));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}
