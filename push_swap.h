#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

typedef struct s_pile
{
	int				value;
	struct s_pile	*next;
}	t_pile;

void	swap_a(t_pile **pile_a, int isshow);
void	swap_b(t_pile **pile_b, int isshow);
void	swap_ab(t_pile **pile_a, t_pile **pile_b, int isshow);

void	rotate_a(t_list **pile_a, int isshow);
void	rotate_b(t_list **pile_b, int isshow);
void	rotate_ab(t_list **pile_a, t_list **pile_b, int isshow);

void	reverse_rotate_a(t_pile **pile_a, int isshow);
void	reverse_rotate_b(t_pile **pile_b, int isshow);
void	reverse_rotate_ab(t_pile **pile_a, t_pile **pile_b, int isshow);

#endif
