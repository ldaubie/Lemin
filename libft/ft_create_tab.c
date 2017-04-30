/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 20:37:20 by ldaubie           #+#    #+#             */
/*   Updated: 2017/04/28 14:35:27 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_create_tab(char *(**tab)())
{
	tab[0] = &ft_putstr_v;
	tab[1] = &ft_putnbr_v;
	tab[2] = &ft_putchar_v;
	tab[3] = &ft_putnbr_v;
	tab[4] = &ft_put_oct;
	tab[5] = &ft_put_deci;
	tab[6] = &ft_put_hexa;
	tab[7] = &ft_put_oct;
	tab[8] = &ft_put_deci;
	tab[9] = &ft_put_hexa_maj;
	tab[10] = &ft_putnbr_v;
	tab[11] = &ft_putvoid;
	tab[12] = &ft_putlchar;
	tab[13] = &ft_putlchar_etoile;
	tab[14] = &ft_binary;
}
