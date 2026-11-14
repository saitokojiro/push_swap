/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 14:27:47 by joellin           #+#    #+#             */
/*   Updated: 2026/11/14 16:41:07 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_pile **pile_a, int isshow)
{
	t_pile	*b_last;
	t_pile	*last;

	if (!pile_a || !*pile_a || !(*pile_a)->next)
		return ;
	b_last = pile_a;
	while (b_last->next->next)
		b_last = b_last->next;
	last = b_last->next;
	b_last->next = NULL;
	last = *pile_a;
	*pile_a = last;
	if (isshow)
		ft_putstr_fd("rra\n", 1);
}

void	reverse_rotate_b(t_pile **pile_b, int isshow)
{
	t_pile	*b_last;
	t_pile	*last;

	if (!pile_b || !*pile_b || !(*pile_b)->next)
		return ;
	b_last = pile_b;
	while (b_last->next->next)
		b_last = b_last->next;
	last = b_last->next;
	b_last->next = NULL;
	last = *pile_b;
	*pile_b = last;
	if (isshow)
		ft_putstr_fd("rrb\n", 1);
}

void	reverse_rotate_ab(t_pile **pile_a, t_pile **pile_b, int isshow)
{
	if (!pile_a || !*pile_a || !pile_b || !*pile_b
		|| !(*pile_a)->next || !(*pile_b)->next)
		return ;
	reverse_rotate_a(pile_a, 0);
	reverse_rotate_b(pile_b, 0);
	if (isshow)
		ft_putstr_fd("rrr\n", 1);
}
