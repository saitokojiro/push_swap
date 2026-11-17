/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:51:19 by joellin           #+#    #+#             */
/*   Updated: 2026/11/17 11:21:36 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./src/libft/libft.h"

typedef struct s_pile
{
	int				value;
	struct s_pile	*next;
}	t_pile;

int		min_index(t_list *pile);

void	swap_a(t_list **pile_a, int isshow);
void	swap_b(t_list **pile_b, int isshow);
void	swap_ab(t_list **pile_a, t_list **pile_b, int isshow);

void	push_a(t_list **pile_a, t_list **pile_b, int isshow);
void	push_b(t_list **pile_a, t_list **pile_b, int isshow);

void	rotate_a(t_list **pile_a, int isshow);
void	rotate_b(t_list **pile_b, int isshow);
void	rotate_ab(t_list **pile_a, t_list **pile_b, int isshow);

void	reverse_rotate_a(t_list **pile_a, int isshow);
void	reverse_rotate_b(t_list **pile_b, int isshow);
void	reverse_rotate_ab(t_list **pile_a, t_list **pile_b, int isshow);

#endif
