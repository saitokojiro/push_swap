/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 22:03:35 by joellin           #+#    #+#             */
/*   Updated: 2026/11/09 15:08:38 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	int	count;
	int	ret;

	count = 0;
	if (n >= 10)
	{
		ret = ft_putunsigned_fd(n / 10, fd);
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
