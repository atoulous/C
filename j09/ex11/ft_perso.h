/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulous <atoulous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:17:13 by atoulous          #+#    #+#             */
/*   Updated: 2015/10/23 11:41:01 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SAVE_AUSTIN_POWERS " 42 "
#include <string.h>

typedef struct s_perso
{	
	char *name;
	float life;
	int	age;
	char *profession;
}	
t_perso;
