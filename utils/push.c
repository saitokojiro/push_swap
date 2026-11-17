/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 13:24:00 by joellin           #+#    #+#             */
/*   Updated: 2026/11/17 11:40:38 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **pile_a, t_list **pile_b, int isshow)
{
	t_list	*tmp;

	if (!pile_a || !pile_b || !*pile_b)
		return ;
	tmp = *pile_b;
	*pile_b = tmp->next;
	ft_lstadd_front(pile_a, tmp);
	if (isshow)
		ft_putstr_fd("pa\n", 1);
}

void	push_b(t_list **pile_a, t_list **pile_b, int isshow)
{
	t_list	*tmp;

	if (!pile_a || !pile_b || !*pile_a)
		return ;
	tmp = *pile_a;
	*pile_a = tmp->next;
	ft_lstadd_front(pile_b, tmp);
	if (isshow)
		ft_putstr_fd("pb\n", 1);
}
