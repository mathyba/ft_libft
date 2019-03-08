/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llabs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:15:32 by emuckens          #+#    #+#             */
/*   Updated: 2018/01/19 21:21:18 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Simliar to ft_abs, except it handles long long values.
*/

long long		ft_llabs(long long n)
{
	return (n > 0 ? n : -n);
}
