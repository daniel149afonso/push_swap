/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:40:43 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/25 19:18:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putlst(t_stack *stack_a, t_stack *stack_b)
{
	printf("Stack_a: ");
	while (stack_a)
	{
		printf("%d, ", stack_a->number);
		stack_a = stack_a->next;
	}
	printf("Stack_b: ");
	while (stack_b)
	{
		printf("%d, ", stack_b->number);
		stack_b = stack_b->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	if (argc > 1)
	{
		stack_a = full_stack_values(argv);
		do_pb(&stack_a, &stack_b);
		ft_putlst(stack_a, stack_b);
	}
	return (0);
}
