/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 14:58:13 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/18 15:27:27 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	int		swap;
	void	*data_tmp;

	swap = 1;
	if (*begin_list == 0)
		return ;
	while (swap)
	{
		swap = 0;
		tmp = *begin_list;
		while (tmp->next)
		{
			if (cmp(tmp->data, tmp->next->data) > 0)
			{
				data_tmp = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = data_tmp;
				swap = 1;
			}
			tmp = tmp->next;
		}
	}
}
