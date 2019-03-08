/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:42:04 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/26 19:14:50 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates size bytes of memory and clears its content.
** Be aware that bzero is deprecated and creates vulnerability issues detailed
** in official Programmer's manual.
*/

void	*ft_memalloc(size_t size)
{
	void *zone;

	if (!(zone = (char *)malloc(size)))
		return (NULL);
	ft_bzero(zone, size);
	return (zone);
}
