/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:06:52 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 13:35:19 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Writes the character c, cast to an unsigned char, to STOUT.
*/

void		ft_putchar(int c)
{
	write(1, (unsigned char *)&c, 1);
}
