/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:52:14 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 21:24:57 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(unsigned long long ptr, int fd)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	count += ft_putstr_fd("0x", fd);
	count += ft_puthex_fd(ptr, 'x', fd);
	return (count);
}
