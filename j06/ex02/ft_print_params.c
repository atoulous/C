/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 21:24:34 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/30 11:07:11 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_params(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	ft_print_params(argc, argv);
	return (0);
}
