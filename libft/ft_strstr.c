/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:48:02 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:40:38 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		y;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		y = 0;
		while (s2[y] && s1[i + y] == s2[y])
			y++;
		if (s2[y] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
