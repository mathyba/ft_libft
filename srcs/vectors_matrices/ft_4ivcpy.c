/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4ivcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:17:53 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/14 20:03:36 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies values of 4-integer vector src into 4-integer vector pointed to by
** dest. 
*/

void		ft_4ivcpy(t_4ivect *dest, t_4ivect src)
{
	(*dest).x = src.x;
	(*dest).y = src.y;
	(*dest).z = src.z;
	(*dest).w = src.w;
}
