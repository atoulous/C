/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 18:53:06 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/23 20:35:07 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == 0 || data_ref == 0)
		return (0);
	btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root->item);
	btree_search_item(root->right, data_ref, cmpf);
	return (0);
}
