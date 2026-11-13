/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:37:37 by joellin           #+#    #+#             */
/*   Updated: 2026/10/27 18:11:11 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	len;
	int	x;

	if (!s)
		return (0);
	len = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			len++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (len);
}

static	char	*fill_word(const char *s, int start, int end)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static	void	*ft_free_arry(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static	void	ft_init(size_t *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	int		j;
	int		start_word;
	char	**res;

	ft_init(&i, &j, &start_word);
	res = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!s || !res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			res[j] = fill_word(s, start_word, i);
			if (!res[j])
				return (ft_free_arry(res, j));
			start_word = -1;
			j++;
		}
		i++;
	}
	return (res);
}
