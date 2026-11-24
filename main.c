/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:57:18 by joellin           #+#    #+#             */
/*   Updated: 2026/11/24 21:41:02 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_opts	opts;
	int		start;
	t_list	*pile_a;
	t_list 	*pile_b;

	if(argc < 2)
		return (0);
	pile_a = NULL;
	pile_b = NULL;
	start = ft_getflag(argc, argv, &opts);
	if(start == -1)
		ft_error(&pile_a, &pile_b);

	if (start == argc)
		return (0);
	if (!fill_stack(&pile_a, argc - start, argv + start))
		ft_error(&pile_a, &pile_b);
	if (!is_sort(pile_a))
		sort_algo(&pile_a, &pile_b, &opts);
	
	free_stack(&pile_a, &pile_b);
	return (0);
}
