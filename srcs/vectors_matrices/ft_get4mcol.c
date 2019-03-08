/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get4mcol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:12:57 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:16:47 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns vector containing the values of column argument 2 of 4-square matrix
** m.
*/

t_4vect		ft_get4mcol(double m[4][4], int col)
{
	t_4vect ver;

	ver.x = m[0][col];
	ver.y = m[1][col];
	ver.z = m[2][col];
	ver.w = m[3][col];
	return (ver);
}
