/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:23:42 by daniel149af       #+#    #+#             */
/*   Updated: 2025/02/11 19:30:25 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*full_stack_values(char **strs)
{
	t_stack		*stack_a;
	long		nb;
	int			i;
	char		**tmp;

	if (count_args(strs) == 2)
		tmp = ft_split(strs[1], ' ');
	else
		tmp = strs + 1;
	i = 0;
	while (tmp[i])
	{
		nb = ft_atoi(tmp[i]);
		if (i == 0)
			stack_a = stack_new((int)nb);
		else
			stack_add_bottom(&stack_a, stack_new((int)nb));
		i++;
	}
	if (count_args(strs) == 2)
		free_split(tmp);
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

	if (!stack_a || stack_size <= 0)
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
		if (highest != NULL)
			highest->index = stack_size;
	}
}
//BUT:
//Full_stack: remplit la liste avec les valeurs passés en param
//Il crée un nouvel elem et ajoute les autres à la fin de la liste
//Check: entier min et max
//-------
//assign_index: donne un index à chaque valeur decroissante
