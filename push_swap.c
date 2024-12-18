/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:40:43 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/18 18:36:32 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		if (argv[1][0] == '\0' || is_empty_string(argv[1]))
			error_exit();
		push_swap(&stack_a, &stack_b, argv);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	return (0);
}
//Main: verifie si une chaine vide ou remplie d'espaces est passée ""
