/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:53:23 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:52:43 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns null-terminated string containing s without space
** characters at the beginning or at the end.
*/

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*str;
	char	*s2;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	s2 = (char *)s;
	while (ft_isspace(*(s2 + len - 1)))
		len--;
	if (!len)
		return (ft_strdup(""));
	while (ft_isspace(*s2))
	{
		len--;
		s2++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str = ft_memcpy(str, s2, len);
	return (str);
}
