/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:54:23 by emuckens          #+#    #+#             */
/*   Updated: 2017/11/22 19:56:37 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the uppercase equivalent of c.
*/

int		ft_tolower(int c)
{
	return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}
