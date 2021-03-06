/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:15:32 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:58:12 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Computes the absolute value of the integer argument n and returns it.
*/

size_t		ft_abs(int n)
{
	return (n > 0 ? (size_t)n : (size_t)-n);
}
