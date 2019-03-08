/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:36:22 by emuckens          #+#    #+#             */
/*   Updated: 2018/10/13 19:42:26 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the initial portion of the string pointed to by nptr to int.
** Does not detect errors.
*/

int			ft_atoi(const char *nptr)
{
	int neg;
	int value;

	value = 0;
	while (ft_isspace(*nptr))
		nptr++;
	neg = (*nptr == '-') ? 1 : 0;
	if (neg || *nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr <= '9' && *nptr >= '0')
		value = (*nptr++ - '0') + 10 * value;
	return (neg ? -value : value);
}
