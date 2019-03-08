/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_44mtranspose.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:54:57 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/21 14:55:04 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Transpose 4-square matrix pointed by m, i.e. swapping values so that rows
** become columns and columns become rows.
*/

void		ft_44mtranspose(double (*m)[4][4])
{
	ft_swapd(&((*m)[1][0]), &((*m)[0][1]));
	ft_swapd(&((*m)[2][0]), &((*m)[0][2]));
	ft_swapd(&((*m)[3][0]), &((*m)[0][3]));
	ft_swapd(&((*m)[2][1]), &((*m)[1][2]));
	ft_swapd(&((*m)[3][1]), &((*m)[1][3]));
	ft_swapd(&((*m)[3][2]), &((*m)[2][3]));
}
