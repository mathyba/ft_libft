/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lllen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:27:06 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:41:47 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_nblen, except it handles long long values.
*/

size_t		ft_lllen(long long n)
{
	if (n < 0)
		return (n == -9223372036854775807 ? 20 : ft_lllen(-n) + 1);
	return (n / 10 ? ft_lllen(n / 10) + 1 : 1);
}