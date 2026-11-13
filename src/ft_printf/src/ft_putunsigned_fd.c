/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 22:03:35 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 22:44:29 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunsigned_fd(n / 10, fd);
	count += ft_putchar_fd((n % 10) + '0', fd);
	return (count);
}
