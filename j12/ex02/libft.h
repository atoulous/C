/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 13:22:22 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/22 14:49:16 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <stdio.h>

# define BUF_SIZE 512

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_tail(char *file, int res);
int		ft_atoi(char *str);

#endif
