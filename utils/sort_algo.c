/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:30:02 by joellin           #+#    #+#             */
/*   Updated: 2026/11/25 09:11:49 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	avg_unsort(t_list *pil_a)
{
	t_list	*current;
	t_list	*next;
	int		miss;
	int		pair;

	miss = 0;
	pair = 0;
	current = pil_a;
	while (current)
	{
		next = current->next;
		while (next)
		{
			pair++;
			if (*(int *)current->content > *(int *)next->content)
				miss++;
			next = next->next;
		}
		current = current->next;
	}
	if (pair == 0)
		return (0.0);
	return ((double) miss / pair);
}

static void	adaptive(t_list **pil_a, t_list **pil_b, int isshow)
{
	double	avg_miss;

	avg_miss = avg_unsort(*pil_a);
	if (avg_miss < 0.2)
		simple(pil_a, pil_b, isshow);
	else if (avg_miss < 0.5)
		simple(pil_a, pil_b, isshow);
	else
		simple(pil_a, pil_b, isshow);
}

void	sort_algo(t_list **pile_a, t_list **pile_b, t_opts *opts)
{
	if (opts->strat == STRAT_SIMPLE)
		simple(pile_a, pile_b, 1);
	else if (opts->strat == STRAT_MEDIUM)
		simple(pile_a, pile_b, 1);
	else if (opts->strat == STRAT_COMPLEX)
		simple(pile_a, pile_b, 1);
	else
		adaptive(pile_a, pile_b, 1);
}
