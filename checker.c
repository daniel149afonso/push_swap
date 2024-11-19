/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:40:43 by daniel149af       #+#    #+#             */
/*   Updated: 2024/11/19 16:04:42 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_checker(char **tab, int size)
{
	int	i;
	int	j;
	int	nbr;
	int	*elems;

	elems = malloc((size - 1) * sizeof(int));
	if (!elems)
		return (0);
	i = 1;
	j = 0;
	while (i < size)
	{
		nbr = ft_atoi(tab[i]);
		elems[j] = nbr;
		printf("%d\n", elems[j]);
		i++;
		j++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_checker(argv, argc);

	}
	return (0);
}
