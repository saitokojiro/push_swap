/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:00:48 by joellin           #+#    #+#             */
/*   Updated: 2026/11/17 11:22:04 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(t_list *pile)
{
	int	i;
	int	pose;
	int	min;

	min = *(int *)pile->content;
	pose = 0;
	i = 0;
	while (pile)
	{
		if (*(int *)pile->content < min)
		{
			min = *(int *)pile->content;
			pose = i;
		}
		pile = pile->next;
		i++;
	}
	return (pose);
}
