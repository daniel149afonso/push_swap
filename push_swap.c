/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:40:43 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/26 16:16:53 by daafonso         ###   ########.fr       */
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
		if (check_sorted(stack_a))
		{
			do_pb(&stack_a, &stack_b);
			ft_putlst(stack_a, stack_b);
		}
	}
	return (0);
}
