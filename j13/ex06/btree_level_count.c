/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 19:40:54 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/23 20:36:12 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int		a;
	int		b;

	if (root == 0)
		return (0);
	a = btree_level_count(root->left);
	b = btree_level_count(root->right);
	if (a > b)
		return (a + 1);
	else
		return (b + 1);
}
