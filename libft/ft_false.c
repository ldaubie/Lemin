/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_false.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 14:05:34 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:35:37 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_false(int *i, int tab[8])
{
	char	*s;

	s = ft_strnew(1);
	s[0] = g_s[*i];
	if (tab[5] != -10)
		return (ft_strjoin(ft_remplissage('0', tab[5] - 1), s));
	return (s);
}
