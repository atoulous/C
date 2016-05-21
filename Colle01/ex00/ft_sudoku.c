/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 14:41:13 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/25 18:42:41 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkline(char k, char *argv[], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (argv[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		checkcol(char k, char *argv[], int j)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		if (argv[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		checkblock(char k, char *argv[], int i, int j)
{
	int ib;
	int jb;

	ib = i - ((i - 1) % 3);
	jb = j - (j % 3);
	i = ib;
	j = jb;
	while (i < ib + 3)
	{
		while (j < jb + 3)
		{
			if (argv[i][j] == k)
				return (0);
			j++;
		}
		j = jb;
		i++;
	}
	return (1);
}

int		checkchar(int argc, char *argv[], int i, int j)
{
	int numvalue;

	numvalue = 0;
	while (++i < argc)
	{
		while (argv[i][++j] != '\0')
		{
			if (argv[i][j] >= 49 && argv[i][j] <= 57)
				numvalue++;
			if ((argv[i][j] < 49 && argv[i][j] != '.') || argv[i][j] > 57)
			{
				return (0);
			}
		}
		if (j != 9)
		{
			return (0);
		}
		j = 0;
	}
	if (numvalue < 17)
		return (0);
	return (1);
}

int		grid(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '.')
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
