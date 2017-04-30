/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 19:09:24 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:38:45 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_reverse(char *str)
{
	char	*s;
	int		i;
	int		tall;

	i = 0;
	tall = ft_strlen(str);
	s = (char *)malloc(sizeof(char) * (tall + 1));
	while (tall > 0)
	{
		s[i] = str[tall - 1];
		i++;
		tall--;
	}
	return (s);
}
