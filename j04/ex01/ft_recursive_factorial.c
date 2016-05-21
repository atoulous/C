/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 14:27:20 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/27 14:55:39 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		i;

	i = nb;
	if ((nb > 12) || (nb < 0))
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
