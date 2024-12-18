/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:40:43 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/18 17:23:46 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putlst(t_stack *stack_a, t_stack *stack_b)
{
	printf("Stack_a: ");
	while (stack_a)
	{
		printf("%d ,", stack_a->value);
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

void	push_swap(t_stack **stack_a, t_stack **stack_b, char **argv)
{
	int		stack_size;

	check_input(argv);
	*stack_a = full_stack_values(argv);
	stack_size = get_size_stack(*stack_a);
	if (!is_sorted(*stack_a))
	{
		assign_index(*stack_a, stack_size);
		if (stack_size == 2)
			do_sa(stack_a);
		else if (stack_size == 3)
			sort3(stack_a);
		else if (stack_size <= 5)
			sort5(stack_a, stack_b);
		else
			sort_radix(stack_a, stack_b, stack_size);
	}
	//ft_putlst(*stack_a, *stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	if (argv[1][0] == '\0')
		error_exit();
	if (argc > 1)
	{
		push_swap(&stack_a, &stack_b, argv);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	return (0);
}
//Main: verifie si une chaine vide est passée ""
