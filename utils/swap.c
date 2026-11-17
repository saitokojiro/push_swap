/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:28:27 by joellin           #+#    #+#             */
/*   Updated: 2026/11/17 11:17:15 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **pile_a, int isshow)
{
	int	tmp;

	if (!pile_a || !*pile_a || !(*pile_a)->next)
		return ;
	tmp = *(int *)(*pile_a)->content;
	(*pile_a)->content = (*pile_a)->next->content;
	*(int *)(*pile_a)->next->content = tmp;
	if (isshow)
		ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_list **pile_b, int isshow)
{
	int	tmp;

	if (!pile_b || !*pile_b || !(*pile_b)->next)
		return ;
	tmp = *(int *)(*pile_b)->content;
	(*pile_b)->content = (*pile_b)->next->content;
	*(int *)(*pile_b)->next->content = tmp;
	if (isshow)
		ft_putstr_fd("sb\n", 1);
}

void	swap_ab(t_list **pile_a, t_list **pile_b, int isshow)
{
	if (!pile_a || !*pile_a || !pile_b || !*pile_b
		|| !(*pile_a)->next || !(*pile_b)->next)
		return ;
	swap_a(pile_a, 0);
	swap_b(pile_b, 0);
	if (isshow)
		ft_putstr_fd("ss\n", 1);
}
