/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:09:31 by joellin           #+#    #+#             */
/*   Updated: 2026/11/17 11:41:01 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"
#include <stdio.h>

void	simple(t_list **pile_a, t_list **pile_b, int isshow)
{
	int	size;
	int	index;

	size = 0;
	index = 0;
	while (*pile_a)
	{
		size = ft_lstsize(*pile_a);
		index = min_index(*pile_a);
		if (index <= size / 2)
			while (index--)
				rotate_a(pile_a, isshow);
		else
			while (index++ < size)
				reverse_rotate_a(pile_a, isshow);
		push_b(pile_a, pile_b, isshow);
	}
	while (*pile_b)
		push_a(pile_a, pile_b, 0);
}


void	print_stack(char *name, t_list *stack)
{
	printf("%s : ", name);
	while (stack)
	{
		printf("%d ", *(int *)stack->content);
		stack = stack->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*pile_a;
	t_list	*pile_b;
	int		numbers[] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
	int		i;

	pile_a = NULL;
	pile_b = NULL;
	i = 0;

	while (i < 9)
	{
		ft_lstadd_back(&pile_a, ft_lstnew(&numbers[i]));
		i++;
	}

	printf("Avant le tri :\n");
	print_stack("Pile A", pile_a);
	print_stack("Pile B", pile_b);

	printf("\nExecution de simple()...\n\n");
	simple(&pile_a, &pile_b, 1);

	printf("\nApres le tri :\n");
	print_stack("Pile A", pile_a);
	print_stack("Pile B", pile_b);

	return (0);
}