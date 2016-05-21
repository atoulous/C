/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 17:19:18 by atoulous          #+#    #+#             */
/*   Updated: 2016/02/22 18:08:16 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H
# define BASE "0123456789"
# define HEX "0123456789abcdef"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_convert_base(int nbr, char *base_from, char *base_to);
int		ft_power(int nb, int pow);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
void	ft_display_hexdump(char *file);
void	hex_print(char txt);
void	file_error(void);
void	hexdump(char **file);
void	hex_print_c(char txt);

#endif
