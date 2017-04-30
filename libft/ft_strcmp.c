/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:51:07 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:39:15 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && (str2[i] || str1[i]))
		i++;
	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);
	else
		return ((int)(str1[i] - str2[i]));
}
