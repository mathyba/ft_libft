/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:28:41 by emuckens          #+#    #+#             */
/*   Updated: 2017/11/22 19:27:02 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks whether c is a 7-bit unsigned char value that fits into the ASCII
** character set.
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
