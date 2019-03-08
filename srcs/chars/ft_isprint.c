/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:03:34 by emuckens          #+#    #+#             */
/*   Updated: 2017/11/22 19:27:55 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks for any printable character including space.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) || ft_isspace(c));
}
