/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 17:24:24 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/11 17:24:45 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_loop(char **tab, int size, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		n;
	int		size;

	size = 0;
	while (tab[size])
		size++;
	n = 0;
	while (n < size - 1)
	{
		ft_loop(tab, size, cmp);
		n++;
	}
}
