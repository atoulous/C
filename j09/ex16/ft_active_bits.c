/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:45:54 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/23 14:51:15 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int power;

	power = 2;
	if (value == -2147483648)
		return (32);
	if (value < 0)
		value = value * -1;
	else if (value == 0)
		return (0);
	if (value == 1)
		return (1);
	while (power < value)
		power = power * 2;
	if (power > value)
	{
		value = value - (power / 2);
		return (1 + ft_active_bits(value));
	}
	return (1);
}
