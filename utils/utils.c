/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:00:48 by joellin           #+#    #+#             */
/*   Updated: 2026/11/23 10:33:11 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(t_list *pile)
{
	int	i;
	int	pose;
	int	min;

	min = *(int *)pile->content;
	pose = 0;
	i = 0;
	while (pile)
	{
		if (*(int *)pile->content < min)
		{
			min = *(int *)pile->content;
			pose = i;
		}
		pile = pile->next;
		i++;
	}
	return (pose);
}

int	sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (nb < 0)
		return (NULL);
	while (i < nb && i <= 46340)
	{
		result = i * i;
		if (result == nb)
		{
			return (i);
		}
		i++;
	}
}

void	init_atoi(int *i, int *sign, int *result)
{
	*i = 0;
	*sign = 1;
	*result = 0;
}

int	ft_atoi_strict_custom(char *str, int *n)
{
	int			i;
	int			sign;
	long long	result;

	init_atoi(i, sign, result);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if (result * sign > 2147483647 || result * sign < -2147483647)
			return (0);
		i++;
	}
	if (str[i] != '\0')
		return (0);
	*n = (int)(result * sign);
	return (1);
}
