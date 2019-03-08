/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_inttab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:56:44 by emuckens          #+#    #+#             */
/*   Updated: 2018/01/22 21:17:04 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Verbose display of the first len integers of integer array pointed to by tab.
** Only use for debugging purposes.
*/

void		ft_print_intarr(int *tab, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		ft_putstr("En ");
		ft_putnbr(i);
		ft_putstr(" | ");
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}
