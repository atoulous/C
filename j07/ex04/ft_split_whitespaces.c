/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 12:59:18 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/05 19:35:29 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_separator(char str)
{
	if ((str == ' ') || (str == '\t') || (str == '\n') || (str == '\0'))
		return (0);
	else
		return (1);
}

int		ft_word(char *str)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (!(ft_separator(str[i + 1])) && ft_separator(str[i]))
			word++;
		i++;
	}
	return (word);
}

void	ft_malloc_word(char *str, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (ft_separator(str[i]) && !(ft_separator(str[i + 1])))
		{
			tab[k] = (char*)malloc(sizeof(*tab) * j + 1);
			j = -1;
			k++;
		}
		i++;
		j++;
	}
}

void	ft_print_tab(char **tab, char *str, int i, int j)
{
	int		k;

	k = 0;
	while (str[i])
	{
		if (k < ft_word(str) && ft_separator(str[i]))
		{
			while (ft_separator(str[i]))
			{
				tab[k][j] = str[i];
				j++;
				i++;
			}
			tab[k][j] = '\0';
			k++;
			j = 0;
		}
		else if (k >= ft_word(str))
			tab[k] = 0;
		i++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * ft_word(str) + 1)))
		return (NULL);
	ft_malloc_word(str, tab);
	ft_print_tab(tab, str, i, j);
	return (tab);
}
