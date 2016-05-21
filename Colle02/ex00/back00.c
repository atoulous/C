/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 20:35:52 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/01 20:38:56 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	test0(int l, int h, int x, int y)
{
	if (l == 1 && h == 1)
		return ('o');
	else if (l == x && h == 1)
		return ('o');
	else if (l == 1 && h == y)
		return ('o');
	else if (l == x && h == y)
		return ('o');
	else if (h == 1 || h == y)
		return ('-');
	else if (l == 1 || l == x)
		return ('|');
	else
		return (' ');
}

char	*back00(int x, int y)
{
	int		lc;
	int		hc;
	char	*tab;
	int		index;

	lc = 1;
	hc = 1;
	index = 0;
	if ((tab = (char*)malloc(sizeof(*tab) * ((x + 1) * y + 1))) == NULL)
		return (NULL);
	while (hc <= y)
	{
		while (lc <= x)
		{
			tab[index] = test0(lc, hc, x, y);
			lc++;
			index++;
		}
		tab[index] = '\n';
		lc = 1;
		hc++;
		index++;
	}
	tab[index] = '\0';
	return (tab);
}
