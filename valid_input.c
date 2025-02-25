/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2025/02/11 19:53:08 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nbr(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == ' ') && str[i + 1] == '\0')
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] != '\0')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

	i = 0;
	len = count_args(strs);
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

int	validate_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!check_nbr(args[i]))
			return (0);
		i++;
	}
	if (check_doubles(args) == 1)
		return (0);
	return (1);
}

char	**preprocess_args(char **strs, int *split_used)
{
	if (count_args(strs) == 2)
	{
		*split_used = 1;
		return (ft_split(strs[1], ' '));
	}
	*split_used = 0;
	return (strs + 1);
}

void	check_input(char **strs)
{
	char	**tmp;
	int		split_used;
	long	nb;
	int		i;
	int		nb_len;

	i = 0;
	tmp = preprocess_args(strs, &split_used);
	if (!tmp)
		error_exit();
	while (tmp[i])
	{
		nb = ft_atoi(tmp[i]);
		nb_len = nblen(nb);
		if ((nb > INT_MAX || nb < INT_MIN)
			|| nb_len > 11 || !validate_args(tmp))
		{
			if (split_used)
				free_split(tmp);
			error_exit();
		}
		i++;
	}
	if (split_used)
		free_split(tmp);
}
//BUT: Checker les inputs
//ATTENTION on commence avec i = 1 car on veut exclure le a.out!!!!!
