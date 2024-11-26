/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:42:07 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/26 15:42:02 by daafonso         ###   ########.fr       */
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

//INITIALIZATION
t_stack	*full_stack_values(char **strs);
int		get_size_stack(t_stack *stack);

//OPERATIONS
void	do_pa(t_stack **stack_a, t_stack **stack_b);
void	do_pb(t_stack **stack_a, t_stack **stack_b);

//STACKS
t_stack	*stack_new(int value);
void	stack_add_bottom(t_stack **stack_a, t_stack *new);
t_stack	*get_stack_bottom(t_stack *stack_a);

//UTILS
long	ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	error_exit(t_stack **stack_a);
void	free_stack(t_stack **stack_a);
int		check_sorted(t_stack *stack);

#endif
