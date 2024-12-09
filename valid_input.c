/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/09 21:03:25 by daafonso         ###   ########.fr       */
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

int	check_nbr(char *str)
{
	int	i;

	i = 0;
	if (is_sign(str[i]))
		i++;
	while (str[i])
	{
		if (!is_digit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles(char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	len = count_args(strs);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			printf("Checking: '%s' comparé avec '%s'\n", strs[i], strs[j]);
			if (ft_atoi(strs[i]) == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_input(char **strs)
{
	int		i;
	char	**tmp;

	i = 1;
	if (argc == 2)
	{
		tmp = ft_split(strs[1], ' ');
	}
	while (strs[i])
	{
		if (!check_nbr(strs[i]))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}	
		i++;
	}
	if (check_doubles(strs))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}
//BUT: Checker les inputs
//ATTENTION on commence avec i = 1 car on veut exclure le a.out!!!!!