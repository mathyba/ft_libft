/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:20:37 by emuckens          #+#    #+#             */
/*   Updated: 2018/10/12 12:57:13 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Scans array of integer pointed to by tab and sorts content by checking
** !(size) times adjacent values and swapping them if not in rising order.
** Be aware this is as slow sort.
*/

void	ft_sort_int_tab(int *tab, size_t size)
{
	size_t i;
	size_t j;

	if (!tab)
		return ;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (i < j && j < size)
		{
			if (tab[j] < tab[i])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
