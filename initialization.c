/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:23:42 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/01 15:26:32 by daniel149af      ###   ########.fr       */
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
			error_exit(&stack_a);
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

void	assign_index(t_stack *stack_a, int stack_size)
{
	t_stack	*tmp;
	t_stack	*highest;
	int		max_value;

	if (!stack_a)
		return ;
	while (stack_size-- > 0)
	{
		tmp = stack_a;
		max_value = INT_MIN;
		highest = NULL;
		while (tmp)
		{
			if (tmp->value == INT_MIN && tmp->index == 0)
				tmp->index = 1;
			if (tmp->value > max_value && tmp->index == 0)
			{
				max_value = tmp->value;
				highest = tmp;
			}
			tmp = tmp->next;
		}
		highest->index = stack_size;
	}
}
//BUT:
//Full_stack: remplit la liste avec les valeurs passés en param
//Il crée un nouvel elem et l'ajoute à la fin de la liste
//Check: entier min et max
//-------
//assign_index: donne un index à chaque valeur decroissante
