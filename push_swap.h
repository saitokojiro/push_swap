/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:51:19 by joellin           #+#    #+#             */
/*   Updated: 2026/11/25 09:12:05 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./src/libft/libft.h"

typedef enum e_strat
{
	STRAT_ADAPTIVE,
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
}	t_strat;

typedef struct s_opts
{
	t_strat			strat;
	int				strat_set;
	int				bench;
}	t_opts;

int		min_index(t_list *pile);
int		ft_sqrt(int nb);
int		ft_atoi_strict_custom(char *str, int *n);

int		ft_getflag(int argc, char **argv, t_opts *opts);
int		fill_stack(t_list **pil_a, int count, char **argv);
int		is_sort(t_list *pile);

double	avg_unsort(t_list *pil_a);

void	ft_error(t_list **pile_a, t_list **pile_b);
void	free_stack(t_list **pil_a, t_list **pil_b);

void	simple(t_list **pile_a, t_list **pile_b, int isshow);

void	sort_algo(t_list **pile_a, t_list **pile_b, t_opts *opts);

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
