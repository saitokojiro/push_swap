/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:00:09 by joellin           #+#    #+#             */
/*   Updated: 2026/10/14 10:29:10 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	res;

	if (src == NULL)
		return ((size_t) NULL);
	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (dsize < 1)
		return (res);
	while (src[i] && i < dsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
