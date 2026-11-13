/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:48:17 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 23:19:08 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(t_tab *tab, const char *str)
{
	int	count;

	count = 0;
	if (str[tab->i] == 'c')
		count += ft_putchar_fd(va_arg(tab->ag, int), 1);
	else if (str[tab->i] == 's')
		count += ft_putstr_fd(va_arg(tab->ag, char *), 1);
	else if (str[tab->i] == 'p')
		count += ft_putptr_fd(va_arg(tab->ag, unsigned long long), 1);
	else if (str[tab->i] == 'd' || str[tab->i] == 'i')
		count += ft_putnbr_fd(va_arg(tab->ag, int), 1);
	else if (str[tab->i] == 'u')
		count += ft_putunsigned_fd(va_arg(tab->ag, unsigned int), 1);
	else if (str[tab->i] == 'x' || str[tab->i] == 'X')
		count += ft_puthex_fd(va_arg(tab->ag, unsigned int), str[tab->i], 1);
	else if (str[tab->i] == '%')
		count += ft_putchar_fd('%', 1);
	return (count);
}

static int	ft_loop(t_tab *tab, const char *agstr)
{
	int	count;

	count = 0;
	while (agstr[tab->i])
	{
		if (agstr[tab->i] == '%' && agstr[tab->i + 1] != '\0')
		{
			tab->i++;
			if (agstr[tab->i] == '%')
				count += ft_putchar_fd(agstr[tab->i], 1);
			else
				count += ft_format(tab, agstr);
		}
		else
			count += ft_putchar_fd(agstr[tab->i], 1);
		tab->i++;
	}
	return (count);
}

int	ft_printf(const char *agstr, ...)
{
	t_tab	*tab;
	int		tmp;

	tab = (t_tab *)malloc(sizeof(t_tab));
	if (!tab)
		return (-1);
	tab->i = 0;
	va_start(tab->ag, agstr);
	tmp = ft_loop(tab, agstr);
	va_end(tab->ag);
	free(tab);
	return (tmp);
}
