/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:17:24 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:37:15 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str;
	const char	*bis;

	str = (char *)dst;
	bis = (char *)src;
	if (bis <= str)
	{
		str += len - 1;
		bis += len - 1;
		while (len--)
		{
			*str-- = *bis--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
