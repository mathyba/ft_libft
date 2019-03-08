/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:34:01 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:33:51 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_strstr, excepts it looks for first occurence of needles in at
** most n bytes of haystack string.
** The terminating null bytes are not compared.
*/

static char	*ft_compare(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_cpy;

	len_cpy = len;
	i = 0;
	while (haystack[i] && len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (!len--)
				return (0);
			j++;
			if (!needle[j])
				return (haystack + i);
			else if (haystack[i + j] != needle[j])
				len = len_cpy - i;
		}
		i++;
		len--;
	}
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strequ(needle, ""))
	{
		if (ft_strequ(haystack, ""))
			return ((char *)(haystack + ft_strlen((char *)needle)));
		return ((char *)needle);
	}
	return (ft_compare((char *)haystack, (char *)needle, len));
}
