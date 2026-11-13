/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:11:55 by joellin           #+#    #+#             */
/*   Updated: 2026/10/15 13:29:35 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (dest == NULL && src == NULL)
		return (NULL);
	s = (const unsigned char *) src;
	d = (unsigned char *) dest;
	if ((uintptr_t)d > (uintptr_t)s)
	{
		i = 0;
		while (++i <= n)
			d[n - i] = s[n - i];
	}
	else
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	return (dest);
}
