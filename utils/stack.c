/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 20:11:07 by joellin           #+#    #+#             */
/*   Updated: 2026/11/24 21:17:11 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	free_stack(t_list **pil_a, t_list **pil_b)
{
	if (pil_a)
		ft_lstclear(pil_a, free);
	if (pil_b)
		ft_lstclear(pil_b, free);
}

static int	is_duplicate(t_list *pile, int n)
{
	while (pile)
	{
		if (*(int *)pile->content == n)
			return (1);
		pile = pile->next;
	}
	return (0);
}

int	fill_stack(t_list **pil_a, int count, char **argv)
{
	int	i;
	int val;
	int	*nb;
	t_list	*tim;

	i = 0;
	while (i < count)
	{
		if (!ft_atoi_strict_custom(argv[i], &val) || is_duplicate(*pil_a, val))
			return (0);
		nb = malloc(sizeof(int));
		if(!nb)
			return (0);
		*nb = val;
		tim = ft_lstnew(nb);
		if (!tim)
			return (free(nb), 0);
		ft_lstadd_back(pil_a, tim);
		i++;
	}
	return (1);
}
int is_sort(t_list *pile)
{
	while (pile && pile->next)
	{
		if (*(int *)pile->content > *(int *)pile->next->content)
			return (0);
		pile = pile->next;
	}
	return (1);
}
