/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:51:25 by joellin           #+#    #+#             */
/*   Updated: 2026/10/15 09:51:25 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_str, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_str == '\0')
		return ((char *)str);
	i = 0;
	while (i < len && str[i])
	{
		if (str[i] == to_str[0])
		{
			j = 0;
			while (i + j < len && str[i + j] == to_str[j])
			{
				if (to_str[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
