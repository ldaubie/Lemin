/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 14:56:43 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:37:34 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_preci_for_p(char *str)
{
	if (g_preci == 0 && ft_strstr(str, ft_strdup("0x0")) != 0)
		return (ft_strdup("0x"));
	else if (g_preci != 0 && g_preci != -10 && \
			ft_strstr(str, ft_strdup("0x0")) != 0)
		str = ft_strjoin(str, ft_remplissage('0', g_preci - 1));
	else if ((int)ft_strlen(str) - 2 < g_preci)
		str = ft_strjoin("0x", ft_strjoin(ft_remplissage('0', g_preci \
						- ft_strlen(str) + 2), ft_strsub(str, 2, \
						ft_strlen(str))));
	return (str);
}

char	*ft_preci_gs(char *s, int preci)
{
	int		x;
	int		max;

	max = 0;
	x = 0;
	while (max <= preci)
	{
		max += g_chars[x];
		x++;
	}
	if (max != preci)
		max -= g_chars[x - 1];
	return (ft_strsub(s, 0, max));
}
