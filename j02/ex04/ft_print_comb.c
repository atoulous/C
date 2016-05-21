/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 15:04:37 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/20 21:23:53 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void);
void	ft_comb(int a, int b, int c);
int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 8)
	{
		while (b < 9)
		{
			ft_comb(a, b, c);
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void	ft_comb(int a, int b, int c)
{
	while (c < 10)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
		if (a != 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		c++;
	}
}
