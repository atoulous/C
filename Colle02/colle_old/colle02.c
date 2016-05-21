/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpetit <maxpetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 21:30:52 by maxpetit          #+#    #+#             */
/*   Updated: 2015/10/31 19:04:13 by alahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	ft_top_line(int x, int i);
void	ft_middle_line(int x, int y, int i, int j);
void	ft_bottom_line(int x, int i);
void	ft_xone(int y, int x, int j);

void	ft_top_line(int x, int i)
{
	ft_putchar('A');
	if (x != 1)
	{
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x - 1)
		{
			ft_putchar('A');
		}
	}
	ft_putchar('\n');
}

void	ft_middle_line(int x, int y, int i, int j)
{
	if (x != 1)
	{
		while (j < y - 1)
		{
			if (i == 1)
			{
				ft_putchar('B');
			}
			while (i < x - 1)
			{
				ft_putchar(' ');
				i++;
			}
			if (i == x - 1)
			{
				ft_putchar('B');
				ft_putchar('\n');
			}
			i = 1;
			j++;
		}
	}
}

void	ft_bottom_line(int x, int i)
{
	ft_putchar('C');
	if (x != 1)
	{
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x - 1)
		{
			ft_putchar('C');
		}
	}
	ft_putchar('\n');
}

void	ft_xone(int y, int x, int j)
{
	if (x == 1)
		while (j < y - 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			j++;
		}
}

void	colle2(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x > 0 && y > 0)
	{
		ft_top_line(x, i);
		if (y != 1)
		{
			ft_middle_line(x, y, i, j);
			ft_xone(y, x, j);
			ft_bottom_line(x, i);
		}
	}
}
