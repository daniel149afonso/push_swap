/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:23:42 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/24 21:04:47 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*full_stack_values(char **strs)
{
	t_stack		*stack_a;
	long		nb;
	int			i;

	i = 1;
	while (strs[i])
	{
		nb = ft_atoi(strs[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			printf("ERREURRRRR");
			error_exit(&stack_a);
		}
		if (i == 1)
			stack_a = stack_new((int)nb);
		else
			stack_add_bottom(&stack_a, stack_new((int)nb));
		i++;
	}
	return (stack_a);
}

int	get_size_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
