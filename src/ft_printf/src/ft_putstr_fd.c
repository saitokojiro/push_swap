/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 22:03:20 by joellin           #+#    #+#             */
/*   Updated: 2026/11/09 14:53:05 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *str, int fd)
{
	int	count;
	int	ret;

	count = 0;
	ret = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ret = ft_putchar_fd(*str++, fd);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	return (count);
}
