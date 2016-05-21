/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 15:46:41 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/03 14:17:27 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	init(char indices[], int start, int end)
{
	if (start < end)
	{
		indices[start] = '0';
		init(indices, start + 1, end);
	}
}

int		check_order(char indices[], int start, int end)
{
	if (start + 1 < end)
	{
		return (indices[start] < indices[start + 1])
		&& check_order(indices, start + 1, end);
	}
	return (1);
}

void	put_chars(char indices[], int start, int end)
{
	if (start >= end)
	{
		return ;
	}
	ft_putchar(indices[start]);
	put_chars(indices, start + 1, end);
}

void	loop(char indices[], int start, int end)
{
	while (indices[start] <= '9')
	{
		if (start + 1 < end)
		{
			loop(indices, start + 1, end);
			indices[start + 1] = '0';
		}
		else
		{
			if (check_order(indices, 0, end))
			{
				put_chars(indices, 0, end);
				if (indices[0] <= '9' - end)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		indices[start]++;
	}
}

void	ft_print_combn(int n)
{
	char indices[10];

	init(indices, 0, n);
	loop(indices, 0, n);
}
