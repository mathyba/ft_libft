/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap4v.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 15:47:50 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/21 17:10:56 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Swaps values of 4-double vectors v1 and v2.
*/

void		ft_swap4v(t_4vect *v1, t_4vect *v2)
{
	ft_swapd(&v1->x, &v2->x);
	ft_swapd(&v1->y, &v2->y);
	ft_swapd(&v1->z, &v2->z);
	ft_swapd(&v1->w, &v2->w);
}
