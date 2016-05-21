/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 21:24:34 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/01 11:57:08 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_program_name(int argc, char *argv[])
{
	int		i;

	i = 0;
	argc = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	ft_print_program_name(argc, argv);
	return (0);
}
