/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:33:38 by emuckens          #+#    #+#             */
/*   Updated: 2018/11/20 20:54:52 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Returns a pointer to a new string which is a duplicate of the string s.
*/

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;
	size_t	len;

	len = ft_strlen((char *)src);
	if (!(dup = ft_strnew((len))))
		return (NULL);
	i = 0;
	while (len)
	{
		dup[i] = src[i];
		i++;
		len--;
	}
	return (dup);
}
