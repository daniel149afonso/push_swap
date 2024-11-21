/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:45:05 by daafonso          #+#    #+#             */
/*   Updated: 2024/11/21 13:43:59 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
//BUT: ajouter un nouvel elem de type t_list au debut
//l'ancien premier elem devient le suivant
//new->next = *lst; lst devient l'element suivant
//*lst = new; new devient le premier element
