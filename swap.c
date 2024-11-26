/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:03:43 by daafonso          #+#    #+#             */
/*   Updated: 2024/11/24 15:09:41 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	tmp;

	if (!(stack) || !(stack->next))
		return ;
	tmp = stack->number;
	stack->number = stack->next->number;
	stack->next->number = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
}

void	do_sa(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	do_sb(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	do_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr_fd("ss\n", 1);
}
//BUT: SWAP intervertit la valeur et l'index des deux premiers elems
//Mais ne modifie pas la structure de la liste!
//Un pointeur simple aurait pu etre passé en param
