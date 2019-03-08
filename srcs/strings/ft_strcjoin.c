/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:51:02 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:04:32 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates a fresh string, copies s1, c and s2 into it and adds terminator
** before returning it. 
*/

char	*ft_strcjoin(char const *s1, char const *s2, char c)
{
	char	*str;
	int		index;

	index = 0;
	if (!(str = (char *)ft_strnew(ft_strlen((char *)s1)
		+ ft_strlen((char *)s2)
		+ 1)))
		return (NULL);
	while (s1 && *s1)
	{
		str[index] = *s1;
		++index;
		++s1;
	}
	str[index] = c;
	++index;
	while (s2 && *s2)
	{
		str[index] = *s2;
		++index;
		++s2;
	}
	return (str);
}
