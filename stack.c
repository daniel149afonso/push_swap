/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:45:15 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/30 14:22:39 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*stack_a;

	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_a->value = value;
	stack_a->index = 0;
	stack_a->next = NULL;
	return (stack_a);
}

void	stack_add_bottom(t_stack **stack_a, t_stack *new)
{
	t_stack	*stack_bottom;

	if (!new)
		return ;
	stack_bottom = get_stack_bottom(*stack_a);
	stack_bottom->next = new;
}

t_stack	*get_stack_bottom(t_stack *stack_a)
{
	while (stack_a && stack_a->next != NULL)
	{
		stack_a = stack_a->next;
	}
	return (stack_a);
}

t_stack	*get_stack_before_bottom(t_stack *stack_a)
{
	while (stack_a && stack_a->next->next != NULL)
	{
		stack_a = stack_a->next;
	}
	return (stack_a);
}
