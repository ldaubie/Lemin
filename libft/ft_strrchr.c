/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:37:55 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:40:30 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	tall;
	char	test;

	test = (char)c;
	tall = ft_strlen(s);
	while (tall > 0)
	{
		if (s[tall] == test)
			return ((char *)&s[tall]);
		tall--;
	}
	if (s[tall] == test)
		return ((char *)&s[tall]);
	return (NULL);
}
