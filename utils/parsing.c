/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joellin <joellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:57:15 by joellin           #+#    #+#             */
/*   Updated: 2026/11/24 21:20:47 by joellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_is_flag(char *arg, char *flag)
{
	return (ft_strncmp(arg, flag, ft_strlen(flag) + 1) == 0);
}

static int	ft_set_strat(t_opts *opts, t_strat strat)
{
	if (opts->strat_set)
		return (-1);
	opts->strat = strat;
	opts->strat_set = 1;
	return (0);
}

static int	ft_parse_flag(t_opts *opts, char *arv)
{
	if (ft_is_flag(arv, "--simple"))
		return (ft_set_strat(opts, STRAT_SIMPLE));
	if (ft_is_flag(arv, "--medium"))
		return (ft_set_strat(opts, STRAT_MEDIUM));
	if (ft_is_flag(arv, "--complex"))
		return (ft_set_strat(opts, STRAT_COMPLEX));
	if (ft_is_flag(arv, "--adaptive"))
		return (ft_set_strat(opts, STRAT_ADAPTIVE));
	if (ft_is_flag(arv, "--bench"))
	{
		opts->bench = 1;
		return (0);
	}
	return (-1);
	
}

int	ft_getflag(int argc, char **argv, t_opts *opts)
{
	int	i;

	opts->strat = STRAT_ADAPTIVE;
	opts->strat_set = 0;
	opts->bench = 0;
	i = 1;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (ft_parse_flag(opts, argv[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
