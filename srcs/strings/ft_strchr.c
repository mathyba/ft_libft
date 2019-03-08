/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:12:02 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:35:23 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the first occurence of the character c in the string s,
** or NULL if the character is not found. The terminating null byte is
** considered part of the string, so that if c is specified as '\0', the
** function will return a pointer to the terminator.
*/

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	if (!c)
		return ((char *)(s + ft_strlen((char *)s)));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
