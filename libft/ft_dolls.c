/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dolls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 15:10:18 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:35:34 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_dolls(const char *str, int i, t_chain *ap, t_char *all)
{
	int		nb;

	nb = 0;
	if (ft_presence_star(str, i) == 1)
	{
		nb = ft_atoi(ap->arg);
		if (nb < 0)
		{
			if ((ap->next)->arg && (ap->next)->arg[0] == '-')
				return ((int)ft_strlen((ap->next)->arg) - 1);
			if ((ap->next)->arg)
				return ((int)ft_strlen((ap->next)->arg));
			return ((int)ft_strlen(all->arg));
		}
		return (nb);
	}
	nb = ft_atoi((ap->next)->arg);
	if (nb < 0)
	{
		if ((ap)->arg && ap->arg[0] == '-' && all->arg[0] != '\0')
			return ((int)ft_strlen(all->arg) - 1);
		return ((int)ft_strlen(all->arg));
	}
	return (nb);
}
