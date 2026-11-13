/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:53:46 by joellin           #+#    #+#             */
/*   Updated: 2026/10/20 21:23:48 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	size_t	sum;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	sum = count * size;
	r = malloc(sum);
	if (r == NULL)
		return (NULL);
	ft_bzero(r, sum);
	return (r);
}
