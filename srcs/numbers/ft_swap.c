/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:25:46 by emuckens          #+#    #+#             */
/*   Updated: 2017/11/23 12:13:56 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets integer value pointed to by a to value pointed to by b, and integer
** value pointed to by b to the value initally pointed to by a.
*/

void	ft_swap(int *a, int *b)
{
	int temp;

	if (a && b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
