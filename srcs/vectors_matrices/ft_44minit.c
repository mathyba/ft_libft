/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44minit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:20:55 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:25:10 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Initializes matrix pointed to by m as identity matrix (all values to 0 except
** 1 along row = col diagonal) if val not equal to 0.
** If val is 0, all values of the matrix are set to 0.
*/

void		ft_44minit(double (*m)[4][4], int val)
{
	int row;
	int col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			(*m)[row][col] = (row == col) ? val : 0;
			++col;
		}
		++row;
	}
}
