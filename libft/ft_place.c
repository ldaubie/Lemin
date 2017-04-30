/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:55:39 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:37:27 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_place(char const *s, char c)
{
	size_t i;
	size_t y;
	size_t car;

	i = 0;
	y = 0;
	car = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] == c)
			i++;
		if (s[i] == c && s[i + 1] != c)
			car++;
		if (s[i] != c)
			y++;
		i++;
	}
	return (car + y);
}
