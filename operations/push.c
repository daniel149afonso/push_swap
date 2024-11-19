/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:04:08 by daafonso          #+#    #+#             */
/*   Updated: 2024/11/19 20:05:12 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	stack_b[i] = stack_a[i];
	while (stack_a[j])
	{
		stack_a[i] = stack_a[j];
		while (stack_a[j])
		{
			stack_a[i] = stack_a[j];
			i++;
			j++;
		}
	}
}