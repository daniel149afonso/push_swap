/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:34:40 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/04 18:12:06 by daafonso         ###   ########.fr       */
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

void	sort_radix(t_stack **stack_a, t_stack **stack_b, int size_stack)
{
	int		max_value;
	int		max_bits;
	int		i;
	int		j;

	max_value = find_max(*stack_a);
	max_bits = find_max_bits(max_value);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size_stack)
		{
			if (((*stack_a)->value >> i) & 1)
				do_ra(stack_a);
		}
	}

}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)

{
	int	biggest_nbr;
	int	max_bits;
	int	i;
	int	j;

	biggest_nbr = find_biggest(*stack_a);
	max_bits = find_bits(biggest_nbr);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= biggest_nbr)
		{
			if (((*stack_a)->index >> i) & 1)
				rotate_a (stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}
//BUT: (*stack_a)->value >> i):
//operateur >> decale les bits vers la droite de i positions