/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4fvinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 15:21:27 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/11 11:09:55 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Initializes respectively x, y, z values of 4-float vector pointed to by v
** with values argument 2, 3, and 4.
** 4th vector value w is set to 1. 
*/

void	ft_4fvinit(t_4fvect *v, float x, float y, float z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	v->w = 1;
}
