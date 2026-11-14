/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:41:06 by joellin           #+#    #+#             */
/*   Updated: 2026/11/09 15:27:48 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_decla(int *count, int *ret, long int *n, int *nb)
{
	*count = 0;
	*ret = 0;
	*n = *nb;
}

int	ft_putnbr_fd(int nb, int fd)
{
	long int	n;
	int			count;
	int			ret;

	ft_decla(&count, &ret, &n, &nb);
	if (n < 0)
	{
		ret = ft_putchar_fd ('-', fd);
		n = -n;
		if (ret == -1)
			return (-1);
		count += ret;
	}
	if (n > 9)
	{
		ret = ft_putnbr_fd(n / 10, fd);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_putchar_fd((n % 10) + '0', fd);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
