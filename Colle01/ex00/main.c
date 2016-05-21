/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 14:41:13 by atoulous          #+#    #+#             */
/*   Updated: 2016/03/03 18:35:53 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkline(char k, char *argv[], int i);
int		checkcol(char k, char *argv[], int j);
int		checkblock(char k, char *argv[], int i, int j);
int		checkchar(int argc, char *argv[], int i, int j);
int		grid(int argc, char *argv[]);

void	realgrid(char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (j < 9)
		{
			write(1, &argv[i][j], 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}

int		testcase(char *argv[], int position)
{
	int		i;
	int		j;
	char	k;

	k = 49;
	i = (position / 9) + 1;
	j = position % 9;
	if (position == 81)
		return (1);
	if (argv[i][j] != '.')
		return (testcase(argv, position + 1));
	while (k <= 57)
	{
		if (checkcol(k, argv, j) && checkline(k, argv, i)
			&& checkblock(k, argv, i, j))
		{
			argv[i][j] = k;
			if (testcase(argv, position + 1))
				return (1);
		}
		k++;
	}
	argv[i][j] = '.';
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	j = 0;
	i = 1;
	if (argc != 10)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	if (checkchar(argc, argv, i, j))
	{
		testcase(argv, 0);
		if (grid(argc, argv))
		{
			write(1, "Erreur\n", 7);
			return (0);
		}
		else
			realgrid(argv);
	}
	else
		write(1, "Erreur\n", 7);
	return (0);
}
