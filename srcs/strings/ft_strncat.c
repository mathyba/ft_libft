/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:24:00 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:26:09 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_strcat, except it will use at most n bytes from src and src
** does not neet to be null-terminated if it contains n or more bytes.
** Resulting dst string is also null-terminated.
*/

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!n)
		return (s1);
	while (s1[i])
		i++;
	while (j < n && j < ft_strlen((char *)s2))
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
