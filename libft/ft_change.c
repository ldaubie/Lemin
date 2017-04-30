/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:59:56 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:34:57 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_change(char *str, char c, char d)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = d;
		i++;
	}
	str[i] = '\0';
	return (str);
}
