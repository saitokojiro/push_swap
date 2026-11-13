/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:20:17 by joellin           #+#    #+#             */
/*   Updated: 2026/10/20 20:43:14 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long nb)
{
	int	len;

	len = (nb <= 0);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	nb;
	int		len;
	char	*value;

	nb = nbr;
	len = count_len(nbr);
	value = (char *)malloc(sizeof(char) * (len + 1));
	if (value == NULL)
		return (NULL);
	value[len] = '\0';
	if (nb == 0)
		value[0] = '0';
	if (nb < 0)
	{
		value[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		value[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (value);
}
