/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:16:30 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/26 15:49:38 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_stack **stack_a)
{
	if (*stack_a)
		free_stack(stack_a);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	free_stack(t_stack **stack_a)
{
	t_stack	*tmp;

	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
	*stack_a = NULL;
}

long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result *= sign);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}

int	check_sorted(t_stack *stack)
{
	t_stack	*tmp;
	int		is_sorted;

	is_sorted = 1;
	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->number < tmp->next->number)
		{
			is_sorted = 0;
			return (is_sorted);
		}
		tmp = tmp->next;
	}
	return (is_sorted);
}