/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 00:00:38 by joellin           #+#    #+#             */
/*   Updated: 2026/11/03 00:13:49 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flist;
	t_list	*new;
	void	*content;

	if (!f)
		return (NULL);
	flist = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			(*del)(content);
			ft_lstclear(&flist, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&flist, new);
		lst = lst->next;
	}
	return (flist);
}
