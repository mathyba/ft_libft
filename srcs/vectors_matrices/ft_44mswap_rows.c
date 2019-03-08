/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44mswap_rows.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 16:44:38 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 16:44:40 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Swaps rows r1 and r2 of 4-square matrix pointed to by m.
*/

void	ft_44mswap_rows(double (*m)[4][4], int r1, int r2)
{
	int col;

	col = 0;
	while (col < 4)
	{
		ft_swapd(&(*m)[r1][col], &(*m)[r2][col]);
		++col;
	}
}