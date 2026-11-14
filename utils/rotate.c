/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:42:24 by joellin           #+#    #+#             */
/*   Updated: 2026/11/14 17:02:25 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **pile_a, int isshow)
{
	t_list	*first;

	if (!pile_a || !*pile_a || !(*pile_a)->next)
		return ;
	first = *pile_a;
	*pile_a = first->next;
	first->next = NULL;
	ft_lstadd_back(pile_a, first);
	if (isshow)
		ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_list **pile_b, int isshow)
{
	t_list	*first;

	if (!pile_b || !*pile_b || !(*pile_b)->next)
		return ;
	first = *pile_b;
	*pile_b = first->next;
	first->next = NULL;
	ft_lstadd_back(pile_b, first);
	if (isshow)
		ft_putstr_fd("rb\n", 1);
}

void	rotate_ab(t_list **pile_a, t_list **pile_b, int isshow)
{
	if (!pile_a || !*pile_a || !pile_b || !*pile_b
		|| !(*pile_a)->next || !(*pile_b)->next)
		return ;
	rotate_a(pile_a, 0);
	rotate_b(pile_b, 0);
	if (isshow)
		ft_putstr_fd("rr\n", 1);
}
