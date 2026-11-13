/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:22:27 by joellin           #+#    #+#             */
/*   Updated: 2026/10/15 12:48:21 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (const unsigned char *) s1;
	ptr2 = (const unsigned char *) s2;
	while (i < n && ptr1[i] == ptr2[i])
		i++;
	if (n == i)
		return (0);
	return (ptr1[i] - ptr2[i]);
}
