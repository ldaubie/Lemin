/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaubie <ldaubie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 19:37:20 by Louis             #+#    #+#             */
/*   Updated: 2016/05/20 17:39:39 by ldaubie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int			go_link(char *str, int i)
{
	while (str[i] != '-')
		i--;
	i++;
	return (i);
}

char		*half_link(char *str, int i)
{
	char	*tmp;
	int		j;

	j = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) - i));
	while (str[i] != '\0')
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

void		ft_affich(t_link *test, t_bloc *bloc)
{
	while ((test && test->next) || (bloc && bloc->next))
	{
		if (test)
		{
			ft_printf("%s\n", test->str);
			test = test->next;
		}
		if (bloc)
		{
			ft_printf("%s && {%d} && {%d}\n", bloc->str,
				bloc->nb, bloc->ant_nb);
			bloc = bloc->next;
		}
	}
}

int			ft_linklen(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	return (j);
}

char		*end(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	i = (int)ft_strlen(str);
	if (ft_linklen(str) == 1)
		return (str);
	while (str[i] != '-')
		i--;
	i--;
	while (str[i] != '-')
		i--;
	i++;
	tmp = (char *)malloc(sizeof(char) * (int)ft_strlen(str) - i);
	while (str[i] != '\0')
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
