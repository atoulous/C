/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpetit <maxpetit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 21:30:52 by maxpetit          #+#    #+#             */
/*   Updated: 2015/10/18 21:52:05 by maxpetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	ft_top_line(int x, int i);
void	ft_middle_line(int x, int y, int i, int j);
void	ft_bottom_line(int x, int i);
void	ft_xone(int y, int x, int j);

void	ft_top_line(int x, int i)
{
	ft_putchar('o');
	if (x != 1)
	{
		while (i < x - 1)
		{
			ft_putchar('-');
			i++;
		}
		if (i == x - 1)
		{
			ft_putchar('o');
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
				ft_putchar('|');
			}
			while (i < x - 1)
			{
				ft_putchar(' ');
				i++;
			}
			if (i == x - 1)
			{
				ft_putchar('|');
				ft_putchar('\n');
			}
			i = 1;
			j++;
		}
	}
}

void	ft_bottom_line(int x, int i)
{
	ft_putchar('o');
	if (x != 1)
	{
		while (i < x - 1)
		{
			ft_putchar('-');
			i++;
		}
		if (i == x - 1)
		{
			ft_putchar('o');
		}
	}
	ft_putchar('\n');
}

void	ft_xone(int y, int x, int j)
{
	if (x == 1)
		while (j < y - 1)
		{
			ft_putchar('|');
			ft_putchar('\n');
			j++;
		}
}

void	colle(int x, int y)
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
