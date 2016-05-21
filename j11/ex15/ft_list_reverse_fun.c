/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 15:34:41 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/18 18:54:35 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = -1;
	tmp = begin_list;
	while (tmp && ++i < nbr)
	{
		tmp = tmp->next;
	}
	if (i == nbr)
		return (tmp);
	else
		return (0);
}

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		nb;

	nb = 0;
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		nb++;
	}
	return (nb);
}

void	ft_swap(t_list **elem1, t_list **elem2)
{
	void	*tmp_data;

	tmp_data = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp_data;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*tmp1;
	t_list			*tmp2;
	unsigned int	list_size;
	unsigned int	i;
	unsigned int	j;

	list_size = ft_list_size(begin_list);
	i = 0;
	j = list_size - 1;
	while (i != j && i != list_size / 2)
	{
		tmp1 = ft_list_at(begin_list, i);
		tmp2 = ft_list_at(begin_list, j);
		ft_swap(&tmp1, &tmp2);
		i++;
		j--;
	}
}
