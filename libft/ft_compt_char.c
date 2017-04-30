/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compt_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 12:51:09 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:35:22 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_compt_char(char *s)
{
	int		i;

	i = 1;
	while (s[i])
		i++;
	return (i);
}

int		*ft_mallocation(void)
{
	int		*s;
	int		i;

	i = 0;
	s = (int *)malloc(sizeof(int) * 1000);
	while (i <= 1000)
	{
		s[i] = (int)malloc(sizeof(int));
		i++;
	}
	return (s);
}
