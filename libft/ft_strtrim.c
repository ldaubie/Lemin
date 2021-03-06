/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:50:44 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:40:45 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int a;
	int b;
	int c;
	char*str;

	a = 0;
	c = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (s[a] != '\0')
		a++;
	b = a;
	a--;
	while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t') && a >= 0)
	{
		c++;
		a--;
	}
	str = (char *)malloc(sizeof(char) * (b - c) + 1);
	if (str == NULL)
		return (NULL);
	str[b - c] = '\0';
	return (ft_strncpy(str, s, b - c));
}
