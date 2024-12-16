/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:49:58 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/16 21:43:21 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_value(t_stack *stack_a)
{
	int		min;
	t_stack	*tmp;

	tmp = stack_a;
	min = tmp->value;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

int	get_position_value(t_stack *stack_a, int value)
{
	t_stack	*tmp;
	int		i;

	tmp = stack_a;
	i = 1;
	while (tmp)
	{
		if (tmp->value == value)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	check_pos(t_stack **stack_a, t_stack **stack_b, int value, int is_min)
{
	int	position;

	position = get_position_value(*stack_a, value);
	if (position == 1)
		do_pb(stack_a, stack_b);
	else if (position == 2 || position == 3)
	{
		do_ra(stack_a);
		if (position == 3)
			do_ra(stack_a);
		do_pb(stack_a, stack_b);
	}
	else
	{
		do_rra(stack_a);
		if (position == 4 && !is_min)
			do_rra(stack_a);
		do_pb(stack_a, stack_b);
	}
}

void	sort5(t_stack **stack_a, t_stack **stack_b)
{
	int		max;
	int		min;

	if (!(*stack_a) || is_sorted(*stack_a))
		return ;
	min = find_min_value(*stack_a);
	max = find_max_value(*stack_a);
	if (get_size_stack(*stack_a) == 4)
	{
		check_pos(stack_a, stack_b, min, 1);
		sort3(stack_a);
		do_pa(stack_a, stack_b);
	}
	else
	{
		check_pos(stack_a, stack_b, max, 0);
		check_pos(stack_a, stack_b, min, 1);
		sort3(stack_a);
		do_pa(stack_a, stack_b);
		do_pa(stack_a, stack_b);
		do_ra(stack_a);
	}
}

//BUT: Trier une pile de 4 ou 5
// Si la pile contient 4 éléments, retirez seulement le minimum.
// Si la pile contient 5 éléments, retirez d'abord le maximum puis le minimum.
// Replacez le minimum et le maximum dans l'ordre correct.
