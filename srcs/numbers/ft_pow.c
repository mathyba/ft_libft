/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:58:20 by emuckens          #+#    #+#             */
/*   Updated: 2018/02/07 17:10:08 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the value of n raised to the power of argument 2.
** Returns 1 if power is negative.
*/

int		ft_pow(int n, int pow)
{
	int result;

	result = 1;
	if (pow <= 0)
		return (pow ? 0 : 1);
	while (pow >= 1)
	{
		result *= n;
		pow--;
	}
	return (result);
}
