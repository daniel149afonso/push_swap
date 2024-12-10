/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:20:57 by daniel149af       #+#    #+#             */
/*   Updated: 2024/12/10 17:50:39 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nbr(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
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

	i = 1;
	len = count_args(strs);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			//printf("Checking: '%s' comparé avec '%s'\n", strs[i], strs[j]);
			if (ft_atoi(strs[i]) == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	single_string(char **strs)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split(strs[1], ' ');
	while (split[i])
	{
		if (!check_nbr(split[i]))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}	
		i++;
	}
	if (check_doubles(split))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}

int	check_input(char **strs)
{
	int		i;
	int		split_used;

	i = 0;
	split_used = 0;
	if (count_args(strs) == 2)
		return (single_string(strs));
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
	if (split_used)
		free_split(strs); //Probleme attention tu dois free split autrement !!
	return (1);
}
//BUT: Checker les inputs
//ATTENTION on commence avec i = 1 car on veut exclure le a.out!!!!!
//for (int i = 0; i < count_args(strs); i++)
	// {
	// 	printf("%s ", split[i]);
	// }