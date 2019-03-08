/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:08:54 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:04:03 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocate and returns null-terminated string containing the first len bytes of
** s from the beg index.
*/

char	*ft_strsub(char const *s, unsigned int beg, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!s || !(str = ft_strnew(len)))
		return (NULL);
	i = -1;
	while (len-- && ++i)
		str[i] = s[i + beg];
	return (str);
}
