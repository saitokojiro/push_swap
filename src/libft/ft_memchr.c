/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:03:50 by joellin           #+#    #+#             */
/*   Updated: 2026/10/15 12:47:42 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		cs;
	size_t				i;

	ptr = (const unsigned char *)s;
	cs = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) ptr[i] == (unsigned char) cs)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}
