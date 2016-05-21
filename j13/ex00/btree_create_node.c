/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 18:52:54 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/23 20:29:33 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*btree;

	btree = NULL;
	btree = malloc(sizeof(t_btree));
	if (btree)
	{
		btree->right = 0;
		btree->left = 0;
		btree->item = item;
	}
	return (btree);
}
