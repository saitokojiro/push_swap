/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 09:46:59 by joellin           #+#    #+#             */
/*   Updated: 2026/10/15 13:34:37 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
