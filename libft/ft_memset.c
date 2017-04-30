/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:04:42 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:37:18 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	car;
	size_t			i;

	i = 0;
	car = (unsigned char)c;
	str = (char *)b;
	while (i < len)
	{
		str[i] = car;
		i++;
	}
	return (str);
}
