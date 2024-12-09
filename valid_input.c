/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/09 14:57:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	check_doubles(char **strs, int argc)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = argc - 1;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(strs[i]) == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
