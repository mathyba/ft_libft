/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnccat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:24:00 by emuckens          #+#    #+#             */
/*   Updated: 2018/10/31 15:42:00 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Simliar to ft_strncat except it inserts c between s1 and the first character
** of s2.
** User must ensure that s1 is large enough for n chars of s2, s1 and c.
*/

char		*ft_strnccat(char *s1, const char *s2, size_t n, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!n)
		return (s1);
	while (s1[i])
		i++;
	s1[i] = c;
	++i;
	while (j < n && j < ft_strlen((char *)s2))
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
