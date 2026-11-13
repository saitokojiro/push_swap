/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:52:29 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 21:20:56 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long long n, char c, int fd)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex_fd(n / 16, c, fd);
	count += ft_putchar_fd(hex[n % 16], fd);
	return (count);
}
