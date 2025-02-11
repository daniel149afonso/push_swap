/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:42:07 by daniel149af       #+#    #+#             */
/*   Updated: 2025/02/11 20:38:56 by daafonso         ###   ########.fr       */
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

//STACK TYPE
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//INITIALIZATION
t_stack	*full_stack_values(char **strs);
int		get_size_stack(t_stack *stack);
void	assign_index(t_stack *stack_a, int stack_size);

//OPERATIONS
void	do_pa(t_stack **stack_a, t_stack **stack_b);
void	do_pb(t_stack **stack_a, t_stack **stack_b);
void	do_sa(t_stack **stack_a);
void	do_sb(t_stack **stack_b);
void	do_ss(t_stack **stack_a, t_stack **stack_b);
void	do_ra(t_stack **stack_a);
void	do_rb(t_stack **stack_b);
void	do_rr(t_stack **stack_a, t_stack **stack_b);
void	do_rra(t_stack **stack_a);
void	do_rrb(t_stack **stack_b);
void	do_rrr(t_stack **stack_a, t_stack **stack_b);

//SORTS ALGO
void	sort3(t_stack **stack_a);
void	sort5(t_stack **stack_a, t_stack **stack_b);
void	sort_radix(t_stack **stack_a, t_stack **stack_b, int size_stack);
int		find_max_value(t_stack *stack_a);

//STACKS
t_stack	*stack_new(int value);
void	stack_add_bottom(t_stack **stack_a, t_stack *new);
t_stack	*get_stack_bottom(t_stack *stack_a);
t_stack	*get_stack_before_bottom(t_stack *stack_a);

//UTILS
long	ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
int		is_sorted(t_stack *stack);
char	**ft_split(char const *s, char c);
int		is_empty_string(const char *str);
int		nblen(long nb);

//CHECK INPUTS
void	check_input(char **strs);
int		count_args(char **argv);

//FREE AND ERROR
void	error_exit(void);
void	free_split(char **split);
void	free_stack(t_stack **stack_a);
#endif
