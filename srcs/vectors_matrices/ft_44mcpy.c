/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44mcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:23:47 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:24:03 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies the contents of 4-square matrix src into 4-square matrix pointed to
** by dest.
*/

void		ft_44mcpy(double (*dest)[4][4], double (src)[4][4])
{
	int row;
	int col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			(*dest)[row][col] = src[row][col];
			++col;
		}
		++row;
	}
}
