/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:06:00 by emuckens          #+#    #+#             */
/*   Updated: 2018/11/20 20:54:18 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dest. The memory areas
** may overlap: copying takes place as though the bytes in src are first
** cp[oed omtp a temporary array that does not overlap src or dest, and the
** bytes are then copied from the temporary array to dest.
** Returns a pointer to dest.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = len;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (i--)
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	return (dst);
}
