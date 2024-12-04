/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:34:40 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/03 20:37:44 by daniel149af      ###   ########.fr       */
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

void	sort_radix(t_stack **stack_a)
{
	int	max;
	int	max_bits;
	int	i;
	int	j;

	max = find_max(*stack_a);
	max_bits = find_max_bits(max);
	i = 0;
	while (i < max_bits)
	{
		/* code */
	}

}
