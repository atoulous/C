/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 11:57:49 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/27 14:54:27 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = nb;
	if ((nb > 12) || (nb < 0))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	while (--i > 1)
		nb = i * nb;
	return (nb);
}
