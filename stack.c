/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:45:15 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/21 16:22:32 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

t_stack	*stack_new(int value)
{
	t_stack	*stack_a;

	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_a->number = value;
	stack_a->index = 0;
	stack_a->next = NULL;
	return (stack_a);
}

t_stack *stack_add_bottom(t_stack *stack_head, int value)
{
	t_stack	*stack_bottom;

	stack_bottom = malloc(sizeof(t_stack));
	if (!stack_bottom)
		return (NULL);
	stack_head->next = stack_bottom;
	stack_bottom->number = value;
	stack_bottom->next = NULL;
	return (stack_head);
}
