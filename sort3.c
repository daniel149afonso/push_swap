/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:42:29 by daafonso          #+#    #+#             */
/*   Updated: 2024/11/28 14:56:35 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_highest(t_stack *stack_a)
{
	int		highest;
	t_stack	*tmp;

	tmp = stack_a;
	highest = tmp->number;
	while (tmp && tmp->next)
	{
		if (tmp->next->number > tmp->number)
		{
			highest = tmp->next->number;
		}
		tmp = tmp->next;
	}
	return (highest);
}

void	do_instruction(t_stack *stack_a)
{
	t_stack	*tmp;
	int		highest;

	tmp = stack_a;
	highest = find_highest(stack_a);
	//if (highest == tmp)
}
