/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:13:53 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:14:06 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_abs, except it handles number of double type.
*/

double	ft_dabs(double num)
{
	return (num < 0 ? -num : num);
}
