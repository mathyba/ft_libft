/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:01:04 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:36:21 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the last occurence of the character c in the string s,
** or NULL if the character is not found. The terminating null byte is
** considered part of the string, so that if c is specified as '\0', the
** function will return a pointer to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen((char *)s);
	while (*(s + len) != c && len)
		len--;
	return (*(s + len) == c ? (char *)(s + len) : 0);
}
