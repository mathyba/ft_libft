/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4ivinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 15:21:27 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/14 20:03:16 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Initializes x, y, z values of 4-integer vector pointed to by v to arguments
** 2, 3, 4, and 4th value w to 1.
*/

void	ft_4ivinit(t_4ivect *v, int x, int y, int z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	v->w = 1;
}
