/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:37:20 by joellin           #+#    #+#             */
/*   Updated: 2026/10/14 11:30:22 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	res_d;
	size_t	res_s;

	res_d = 0;
	while (res_d < dsize && dest[res_d])
		res_d++;
	i = res_d;
	j = 0;
	res_s = ft_strlen(src);
	if (dsize == res_d)
		return (res_s + dsize);
	while (src[j] && i < dsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res_d + res_s);
}
