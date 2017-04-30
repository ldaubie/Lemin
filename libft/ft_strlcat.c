/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 17:14:42 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:39:49 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d_size;
	size_t s_size;
	size_t i;

	i = 0;
	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	if (ft_strlen(dst) > size)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && d_size + i < size - 1)
	{
		dst[d_size + i] = src[i];
		i++;
	}
	dst[d_size + i] = '\0';
	return (d_size + s_size);
}
