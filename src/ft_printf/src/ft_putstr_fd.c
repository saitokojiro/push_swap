/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 22:03:20 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 23:17:56 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *str, int fd)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
		count += ft_putchar_fd(*str++, fd);
	return (count);
}
