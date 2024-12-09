/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:42:29 by daafonso          #+#    #+#             */
/*   Updated: 2024/12/08 17:00:54 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_value(t_stack *stack_a)
{
	int		max;
	t_stack	*tmp;

	tmp = stack_a;
	max = tmp->value;
	while (tmp)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

void	sort3(t_stack **stack_a)
{
	int		max;

	if (!(*stack_a) || is_sorted(*stack_a))
		return ;
	max = find_max_value(*stack_a);
	if (max == (*stack_a)->value)
	{
		do_ra(stack_a);
		if ((*stack_a)->value > (*stack_a)->next->value)
			do_sa(stack_a);
	}
	else if (max == (*stack_a)->next->value)
	{
		do_rra(stack_a);
		if ((*stack_a)->value > (*stack_a)->next->value)
			do_sa(stack_a);
	}
	else
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			do_sa(stack_a);
	}
}
