/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:45:23 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/11 12:51:15 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **tab, int i, int ac, int null)
{
	tab[null] = tab[i];
	tab[i] = tab[ac];
	tab[ac] = tab[null];
	tab[null] = 0;
}

void	ft_sort_wordtab(char **tab)
{
	int ac;
	int i;
	int null;

	ac = 0;
	while (tab[ac] != 0)
		ac++;
	null = ac;
	ac--;
	while (ac > 0)
	{
		i = ac - 1;
		while (i >= 0)
		{
			if (ft_strcmp(tab[i], tab[ac]) > 0)
				ft_swap(tab, i, ac, null);
			i--;
		}
		ac--;
	}
}
