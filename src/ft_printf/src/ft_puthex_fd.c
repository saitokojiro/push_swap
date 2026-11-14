/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:52:29 by joellin           #+#    #+#             */
/*   Updated: 2026/11/09 14:59:49 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long long n, char c, int fd)
{
	int		count;
	int		ret;
	char	*hex;

	count = 0;
	ret = 0;
	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		ret = ft_puthex_fd(n / 16, c, fd);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	ret = ft_putchar_fd(hex[n % 16], fd);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
