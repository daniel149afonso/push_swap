/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:40:43 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/02 18:46:18 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putlst(t_stack *stack_a, t_stack *stack_b)
{
	printf("Stack_a: ");
	while (stack_a)
	{
		printf("%d , ", stack_a->value);
		stack_a = stack_a->next;
	}
	printf("\nStack_b: ");
	while (stack_b)
	{
		printf("%d ", stack_b->value);
		stack_b = stack_b->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;

	stack_b = NULL;
	if (argc > 1)
	{
		stack_a = full_stack_values(argv);
		stack_size = get_size_stack(stack_a);
		if (!is_sorted(stack_a))
		{
			assign_index(stack_a, stack_size);
			if (stack_size == 2)
				do_sa(&stack_a);
			else if (stack_size == 3)
				sort3(&stack_a);
			else if (stack_size <= 5)
			{
				printf("Sort5\n");
				sort5(&stack_a, &stack_b);
			}
			ft_putlst(stack_a, stack_b);
		}
	}
	return (0);
}
