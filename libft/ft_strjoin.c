/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:50:16 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:39:46 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		j;

	j = (ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	mem = (char *)malloc(sizeof(char*) * (j + 1));
	if (mem == NULL)
		return (NULL);
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		mem[i] = *s2;
		i++;
		++s2;
	}
	mem[i] = '\0';
	return (mem);
}
