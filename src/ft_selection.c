/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 14:41:19 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/30 14:43:46 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lemin.h"

char		*ft_cuter(char *s, int begin)
{
	int		i;

	if (s[begin] == '-')
		begin++;
	i = begin;
	while (s[i])
	{
		if (s[i] == '-')
			return (ft_strsub(s, begin, i - begin));
		i++;
	}
	return (ft_strsub(s, begin, i - begin));
}

int			ft_compare_path(char *bloc, char *compare)
{
	int		i;

	i = 0;
	while (compare[i])
	{
		if (ft_strcmp(bloc, g_start) != 0 &&
			ft_strcmp(bloc, ft_cuter(compare, i)) == 0)
			return (-1);
		while (compare[i] && compare[i] != '-')
			i++;
		if (compare[i])
			i++;
	}
	return (ft_strlen(bloc));
}

int			not_same(t_link *curt, char *s)
{
	int		i;

	while (curt->next && curt->str)
	{
		i = ft_strlen(g_start);
		while (curt->str[i])
		{
			if (ft_strcmp(ft_cuter(curt->str, i), g_end) != 0)
			{
				if (ft_compare_path(ft_cuter(curt->str, i), s) == -1)
					return (0);
			}
			if (ft_strcmp(ft_cuter(curt->str, i), g_end) == 0)
				break ;
			i += ft_compare_path(ft_cuter(curt->str, i), s);
		}
		curt = curt->next;
	}
	return (1);
}

t_link		*ft_selection(t_link *curt, t_link *final)
{
	t_link	*origin;
	t_link	*asuprr;

	asuprr = final;
	origin = curt;
	curt = link_next(curt);
	while (final->next)
	{
		if (not_same(origin, final->str) == 1)
		{
			curt->str = final->str;
			curt = link_next(curt);
		}
		final = final->next;
	}
	curt->next = NULL;
	//if (listlen(origin) > 1)
	//	origin = link_dell(origin, origin->str);
	return (origin);
}
