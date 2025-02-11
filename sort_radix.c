/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:34:40 by daniel149af       #+#    #+#             */
/*   Updated: 2025/02/11 20:39:04 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_bits(int max)
{
	int	max_bits;

	max_bits = 0;
	while (max > 0)
	{
		max >>= 1;
		max_bits++;
	}
	return (max_bits);
}

int	find_max_index(t_stack *stack_a)
{
	t_stack	*tmp;
	int		max;

	tmp = stack_a;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

void	sort_radix(t_stack **stack_a, t_stack **stack_b, int size_stack)
{
	int	max;
	int	max_bits;
	int	i;
	int	j;

	if (!(*stack_a) || is_sorted(*stack_a))
		return ;
	max = find_max_index(*stack_a);
	max_bits = find_max_bits(max);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size_stack)
		{
			if (((*stack_a)->index >> i) & 1)
				do_ra(stack_a);
			else
				do_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			do_pa(stack_a, stack_b);
		i++;
	}
}
//But:trier pile en utilisant index plutot que valeurs pour traiter bits negatif
