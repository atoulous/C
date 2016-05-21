/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 18:41:26 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/11 14:59:54 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_do_op(char *a, char *b, char *c, int (*f[5])(int, int))
{
	if (b[0] == '+')
		return (f[0](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '-')
		return (f[1](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '*')
		return (f[2](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '/')
		return (f[3](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '%')
		return (f[4](ft_atoi(a), ft_atoi(c)));
	else
		return (0);
}

int		main(int ac, char **av)
{
	int	(*tab[5])(int, int);

	tab[0] = ft_add;
	tab[1] = ft_sub;
	tab[2] = ft_mult;
	tab[3] = ft_div;
	tab[4] = ft_mod;
	if (ac == 4)
	{
		if (av[2][0] == '/' && av[3][0] == '0')
			write(1, "Stop : division by zero", 23);
		else if (av[2][0] == '%' && av[3][0] == '0')
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_do_op(av[1], av[2], av[3], tab));
		write(1, "\n", 1);
	}
	return (0);
}
