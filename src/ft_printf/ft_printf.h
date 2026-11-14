/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:48:21 by joellin           #+#    #+#             */
/*   Updated: 2026/11/09 14:28:58 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct tab
{
	va_list	ag;
	size_t	i;
}	t_tab;

int	ft_printf(const char *agstr, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int nb, int fd);
int	ft_putstr_fd(char *str, int fd);
int	ft_putunsigned_fd(unsigned int n, int fd);
int	ft_puthex_fd(unsigned long long n, char c, int fd);
int	ft_putptr_fd(unsigned long long ptr, int fd);
int	ft_format(t_tab *tab, const char *str, int fd);

#endif