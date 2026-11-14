/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:52:14 by joellin           #+#    #+#             */
/*   Updated: 2026/11/09 15:04:11 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(unsigned long long ptr, int fd)
{
	int	count;
	int	ret;

	count = 0;
	ret = 0;
	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	ret = ft_putstr_fd("0x", fd);
	if (ret == -1)
		return (-1);
	count += ret;
	ret = ft_puthex_fd(ptr, 'x', fd);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
