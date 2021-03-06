/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:51:02 by emuckens          #+#    #+#             */
/*   Updated: 2018/11/26 14:47:15 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates a fresh string, copies s1 and s2 into it and adds terminator before
** returning it.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		index;
	char	*ptr1;
	char	*ptr2;

	index = 0;
	ptr1 = (char *)(unsigned long)s1;
	ptr2 = (char *)(unsigned long)s2;
	if (!(str = (char *)ft_memalloc(ft_strlen(ptr1) + ft_strlen(ptr2) + 1)))
		return (NULL);
	while (s1 && *s1)
	{
		str[index] = *s1;
		++index;
		++s1;
	}
	while (s2 && *s2)
	{
		str[index] = *s2;
		++index;
		++s2;
	}
	return (str);
}
