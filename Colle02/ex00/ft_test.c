/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alahlou <alahlou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 19:09:46 by alahlou           #+#    #+#             */
/*   Updated: 2015/11/01 21:42:31 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_functions.h"

void	ft_test(char *str)
{
	int x;
	int y;
	int colle[5];

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '\n')
			y++;
		x++;
	}
	x = (x - y) / y;
	if (ft_strcmp(back00(x, y), str) == 0)
		colle[0] = 1;
	if (ft_strcmp(back01(x, y), str) == 0)
		colle[1] = 1;
	if (ft_strcmp(back02(x, y), str) == 0)
		colle[2] = 1;
	if (ft_strcmp(back03(x, y), str) == 0)
		colle[3] = 1;
	if (ft_strcmp(back04(x, y), str) == 0)
		colle[4] = 1;
	ft_put_colle(colle, x, y);
}

void	ft_print_error(void)
{
	ft_putstr("aucune\n");
}

void	ft_put_colle(int *colle, int x, int y)
{
	int i;
	int nbc;

	i = 0;
	nbc = colle[0] + colle[1] + colle[2] + colle[3] + colle[4];
	if (nbc == 0)
		ft_print_error();
	while (i != 5)
	{
		if (colle[i] == 1)
		{
			ft_putstr("[colle-0");
			ft_putchar(i + 48);
			ft_putstr("] [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putchar(']');
			if (nbc-- >= 2)
				ft_putstr(" || ");
		}
		i++;
	}
	ft_putchar('\n');
}
