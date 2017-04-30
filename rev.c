/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:38:00 by Louis             #+#    #+#             */
/*   Updated: 2016/06/09 01:21:43 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char			*ft_linkrev(char *str)
{
	t_iter		*iter;

	init_iter(iter = (t_iter *)malloc(sizeof(t_iter)));
	iter->i = (int)(ft_strlen(str));
	iter->str = (char *)malloc(iter->i + 1 * sizeof(char));
	while (str[iter->i] != '-')
		iter->i--;
	iter->i++;
	while (str[iter->i] != '\0')
	{
		iter->str[iter->j] = str[iter->i];
		iter->j++;
		iter->i++;
	}
	iter->str[iter->j] = '-';
	iter->j++;
	while (str[iter->k] != '-')
	{
		iter->str[iter->j] = str[iter->k];
		iter->k++;
		iter->j++;
	}
	iter->str[iter->j] = '\0';
	return (iter->str);
}

int				compt_start(void)
{
	int			i;

	i = 0;
	g_link = g_origin;
	while (g_origin && g_origin->next && g_origin->str)
	{
		if (g_origin && g_origin->str && check_start(g_origin->str) == 1)
			i++;
		g_origin = g_origin->next;
	}
	g_origin = g_link;
	return (i);
}

int				compt_end(void)
{
	int			i;

	i = 0;
	g_link = g_origin;
	while (g_origin && g_origin->next)
	{
		if (g_origin && g_origin->str && check_end(g_origin->str) == 1)
			i++;
		g_origin = g_origin->next;
	}
	g_origin = g_link;
	return (i);
}

t_link			*short_link(void)
{
	t_link		*tmp;
	t_link		*origin_tmp;
	int			i;

	i = compt_start();
	if (i == 0)
		return (NULL);
	tmp = (t_link *)malloc(sizeof(t_link));
	origin_tmp = tmp;
	g_link = g_origin;
	while (g_origin->next)
	{
		if (g_origin && g_origin->str && check_start(g_origin->str) == 1)
		{
			tmp->str = g_origin->str;
			if (i > 1)
			{
				i--;
				tmp = link_next(tmp);
			}
		}
		g_origin = g_origin->next;
	}
	tmp->next = g_link;
	return (origin_tmp);
}

int				listlen(t_link *list)
{
	int			i;

	i = 0;
	while (list->next)
	{
		i++;
		list = list->next;
	}
	return (i);
}