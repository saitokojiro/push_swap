/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:38:10 by joellin           #+#    #+#             */
/*   Updated: 2026/10/15 12:48:29 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	unsigned char		*ptr2;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	ptr1 = (const unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dest);
}
