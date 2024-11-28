/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:27:47 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/28 15:00:53 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*stack_head;
	t_stack	*stack_bottom;

	if (!(*stack) || !((*stack)->next))
		return ;
	stack_head = *stack;
	stack_bottom = get_stack_bottom(*stack);
	stack_bottom->next = stack_head;
	*stack = (*stack)->next;
	stack_head->next = NULL;
}

void	do_ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	do_rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	do_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
//BUT: Le premier elem devient le dernier
//1) Trouver le premier et le dernier elem
//2) Lier la fin à l'ancien premier elem
//3) Mettre à jour la tête de la liste
//4) Couper le lien (mettre a null NEXT)
//ATTENTION toujours couper le lien a la fin!!!!
