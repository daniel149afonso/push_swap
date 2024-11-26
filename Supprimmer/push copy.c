/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:04:08 by daafonso          #+#    #+#             */
/*   Updated: 2024/11/21 13:50:10 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	if (!(*src))
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;

}



int main(void)
{
	int stack_a[5] = {3, 5, 7, 8, 1};
	int stack_b[5] = {3, 5, 7, 0, 0};
	int size_a = 5;
	int size_b = 3;

	printf("Avant:\n Stack a: ");
	for (int i = 0; i < size_a; i++)
	{
		printf("%d, ", stack_a[i]);
	}
	printf(" size: %d\n Stack b: ", size_a);
	for (int i = 0; i < size_b + 2; i++)
	{
		printf("%d, ", stack_b[i]);
	}
	printf(" size: %d\n", size_b);
	push_stack_a(stack_a, stack_b, &size_a, &size_b);

	printf("Après:\n Stack a: ");
	for (int i = 0; i < size_a; i++)
	{
		printf("%d, ", stack_a[i]);
	}
	printf(" size: %d\n Stack b: ", size_a);
	for (int i = 0; i < size_b + 2; i++)
	{
		printf("%d, ", stack_b[i]);
	}
	printf(" size: %d\n", size_b);
	return (0);
}
