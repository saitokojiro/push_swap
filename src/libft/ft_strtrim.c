/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:48:20 by joellin           #+#    #+#             */
/*   Updated: 2026/10/26 19:36:42 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checktrim(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	len;
	size_t	sub;
	size_t	j;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	j = 0;
	while (s1[i] && checktrim(s1[i], set))
		i++;
	j = len - 1;
	if (i == len)
		return (ft_strdup(""));
	while (j > i && checktrim(s1[j], set))
		j--;
	sub = j - i;
	res = (char *)malloc(sizeof(char) * (sub + 2));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1 + i, sub + 1);
	res[sub + 1] = '\0';
	return (res);
}
