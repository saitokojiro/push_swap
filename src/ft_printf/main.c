/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 23:18:23 by joellin           #+#    #+#             */
/*   Updated: 2026/11/01 23:26:54 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 
#include <stdio.h> 
#include <limits.h>

void	partone(int ret1, int ret2)
{
	printf("TEST %%c\n");
	ret1 = printf("Original : %c\n", 'A');
	ret2 = ft_printf("Custom   : %c\n", 'A');
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
	printf("TEST %%s\n");
	ret1 = printf("Original : %s\n", "Hello 42!");
	ret2 = ft_printf("Custom   : %s\n", "Hello 42!");
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
	printf("TEST %%p\n");
	ret1 = printf("Original : %p\n", (void *)42);
	ret2 = ft_printf("Custom   : %p\n", (void *)42);
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
	printf("TEST %%d et %%i\n");
	ret1 = printf("Original : %d %i\n", INT_MIN, INT_MAX);
	ret2 = ft_printf("Custom   : %d %i\n", INT_MIN, INT_MAX);
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
}

void	parttwo(int ret1, int ret2)
{
	char	*str;

	printf("TEST %%u\n");
	ret1 = printf("Original : %u\n", UINT_MAX);
	ret2 = ft_printf("Custom   : %u\n", UINT_MAX);
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
	printf("TEST %%x et %%X\n");
	ret1 = printf("Original : %x %X\n", 255, 255);
	ret2 = ft_printf("Custom   : %x %X\n", 255, 255);
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
	printf("TEST %%%%\n");
	ret1 = printf("Original : %%\n");
	ret2 = ft_printf("Custom   : %%\n");
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
	printf("TEST NULL\n");
	str = NULL;
	ret1 = printf("Original : %s\n", str);
	ret2 = ft_printf("Custom   : %s\n", (char *) str);
	printf("Retours : printf=%d | ft_printf=%d\n\n", ret1, ret2);
}

int	main(void)
{
	int	ret1;
	int	ret2;

	ret1 = 0;
	ret2 = 0;
	printf("========== TEST FT_PRINTF ==========\n\n");
	partone(ret1, ret2);
	parttwo(ret1, ret2);
	printf("========== FIN DES TESTS ==========\n");
	return (0);
}
