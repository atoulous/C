/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:17:42 by atoulous          #+#    #+#             */
/*   Updated: 2015/11/06 13:09:54 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size_para(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 1;
	j = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			j++;
		}
		size = size + j;
		j = 0;
		i++;
	}
	return (size);
}

char	*ft_print_para(int sizepara, char *para, int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	while (k < sizepara)
	{
		while (i < argc)
		{
			while (argv[i][j])
			{
				para[k] = argv[i][j];
				j++;
				k++;
			}
			para[k] = '\n';
			j = 0;
			i++;
			k++;
		}
	}
	para[k - 1] = '\0';
	return (para);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		sizepara;
	char	*para;

	sizepara = ft_size_para(argc, argv);
	if (!(para = (char*)malloc(sizeof(*para) * sizepara + 1)))
		return (NULL);
	ft_print_para(sizepara, para, argc, argv);
	return (para);
}
