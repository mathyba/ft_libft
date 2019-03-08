/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:02:04 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:08:40 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Scans the inital n bytes of the memory area pointed to by c for the first
** instance of c.Both c and the bytes of the memory area pointed to by s
** are interpreted as unsigned char.
*/

void		*ft_memchr(const void *s, int c, size_t n)
{
	char const	*p;
	char		*ptr;

	p = (const char *)s;
	ptr = (char *)(unsigned long)p;
	while (n--)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
