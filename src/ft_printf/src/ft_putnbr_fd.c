/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:41:06 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 22:19:06 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int nb, int fd)
{
	long int	n;
	int			count;

	n = nb;
	count = 0;
	if (n < 0)
	{
		count += ft_putchar_fd ('-', fd);
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr_fd(n / 10, fd);
	count += ft_putchar_fd((n % 10) + '0', fd);
	return (count);
}
