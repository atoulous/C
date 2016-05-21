/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 20:30:26 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/11 16:26:39 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sort_ascending(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int		sort_descending(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (sort_ascending(tab, length, f) == 1
			|| sort_descending(tab, length, f) == 1)
		return (1);
	else
		return (0);
}
