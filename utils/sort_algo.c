/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:30:02 by joellin           #+#    #+#             */
/*   Updated: 2026/11/24 21:47:57 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algo(t_list **pile_a, t_list **pile_b, t_opts *opts)
{
	if (opts->strat == STRAT_SIMPLE)
		simple(pile_a, pile_b, 1);
	else if (opts->strat == STRAT_MEDIUM)
		simple(pile_a, pile_b, 1);
	else if (opts->strat == STRAT_COMPLEX)
		simple(pile_a, pile_b, 1);
	else
		simple(pile_a, pile_b, 1);
}
