/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44mtrxmtrx_mul.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 16:43:30 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:25:52 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compute multiplication of matrices m1 and m2 (following specific rules of
** matrix multiplication) and stores results in 4-square matrix pointed to by
** dest.
*/

void	ft_44mtrxmtrx_mul(double (*dest)[4][4], double m1[4][4],
		double m2[4][4])
{
	int row;
	int col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			(*dest)[row][col] = m1[row][0] * m2[0][col]
				+ m1[row][1] * m2[1][col]
				+ m1[row][2] * m2[2][col]
				+ m1[row][3] * m2[3][col];
			++col;
		}
		++row;
	}
}
