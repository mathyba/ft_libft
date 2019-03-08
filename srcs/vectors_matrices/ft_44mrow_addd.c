/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44mrow_addd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:20:17 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:20:26 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets all (double) values of row argument 2 in  4-square matrix to value
** argument 3.
*/

void	ft_44mrow_addd(double (*m)[4][4], int row, double val)
{
	int col;

	col = 0;
	while (col < 4)
	{
		(*m)[row][col] = val;
		++col;
	}
}
