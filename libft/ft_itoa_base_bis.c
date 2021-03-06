/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 12:52:27 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:36:17 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static long long	ft_sizer(unsigned long long *value, int base)
{
	int					tall;
	unsigned long long	bis;

	bis = *value;
	tall = 1;
	while (bis / base != 0)
	{
		bis = bis / base;
		tall++;
	}
	return (tall);
}

char				*ft_itoa_base_bis(unsigned long long value, int base)
{
	char		*s;
	int			tall;
	long long	value_bis;

	value_bis = value;
	if (value == 0)
		return (ft_strdup("0x0"));
	tall = ft_sizer(&value, base);
	s = (char *)malloc(sizeof(char) * tall + 1);
	s[tall] = '\0';
	tall--;
	while (value != 0)
	{
		if (value % base > 9)
			s[tall] = (value % base) + 87;
		else
			s[tall] = (value % base) + 48;
		value = value / base;
		tall--;
	}
	s = ft_strjoin(ft_strdup("0x"), s);
	return (s);
}
