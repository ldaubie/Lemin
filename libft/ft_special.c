/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 18:17:28 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:38:49 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	ft_special_2(t_char *all)
{
	if (all->large[0] == '0')
		all->large[0] = '+';
	else
	{
		all->preci = ft_strjoin(ft_strdup("+"), all->preci);
		all->large[ft_strlen(all->large) - 1] = '\0';
	}
}

void		ft_special(t_char *all, int plus, int space)
{
	if (all->moins == 1)
	{
		if (all->large[0] == '0')
			all->large[0] = '-';
		else
		{
			all->preci = ft_strjoin(ft_strdup("-"), all->preci);
			all->large[ft_strlen(all->large) - 1] = '\0';
		}
	}
	else if (plus == 1)
		ft_special_2(all);
	else if (space == 1)
	{
		if (all->large[0] == '0')
			all->large[0] = ' ';
		else
		{
			all->preci = ft_strjoin(ft_strdup(" "), all->preci);
			all->large[ft_strlen(all->large) - 1] = '\0';
		}
	}
}
