/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44maddd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:21:49 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:21:56 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets all values of 4-square matrix to value argument 2.
*/

void	ft_44maddd(double (*m)[4][4], double val)
{
	int row;

	row = 0;
	while (row < 4)
	{
		ft_44mrow_addd(m, row, val);
		++row;
	}
}
