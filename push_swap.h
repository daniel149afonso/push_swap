/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:42:07 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/21 16:13:46 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//MACROS
# define INT_MAX 2147483647
# define INT_MIN -2147483648

//LIBRAIRIES
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//STACK TYPE
typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;

//UTILS
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
#endif
