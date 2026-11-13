/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 10:12:05 by joellin           #+#    #+#             */
/*   Updated: 2026/10/14 10:14:08 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s);
	while (i > 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
