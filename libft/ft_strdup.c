/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:40:05 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:39:27 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*memory;
	int		i;

	i = 0;
	memory = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (memory == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		memory[i] = s[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
