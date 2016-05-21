/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:23:12 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/20 22:50:18 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_slut(int a, int b, int c, int d)
{
	if ((a * 10 + b) < (c * 10 + d))
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(' ');
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		if (a != 9 || b != 8 || c != 9 || d != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_loop(int a, int b, int c, int d)
{
	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					ft_slut(a, b, c, d);
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
			d = b + 1;
		}
		a++;
		b = 0;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	ft_print_loop(a, b, c, d);
}
