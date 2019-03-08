/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:33:38 by emuckens          #+#    #+#             */
/*   Updated: 2018/11/20 15:57:26 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Similar to ft_strdup, but copies at most n bytes. If s is longer than n, only
** n bytes are copied, and a terminating null byte is added.
*/

char	*ft_strndup(const char *src, int n)
{
	int		i;
	char	*dup;
	size_t	len;

	len = n;
	if (!(dup = (char *)ft_strnew((len))))
		return (NULL);
	i = 0;
	while (len--)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
