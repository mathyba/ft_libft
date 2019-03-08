/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:12:02 by emuckens          #+#    #+#             */
/*   Updated: 2018/03/16 20:35:09 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the index of the first occurence of the character c in the string s
** after index i, or -1 if the character is not found. The terminating null byte
** is considered part of the string, so that if c is specified as '\0', the
** function will return a pointer to the terminator.
*/

int		ft_strchri(const char *s, int c, int i)
{
	if (!c)
		return (-1);
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (i);
		i++;
	}
	return (-1);
}
