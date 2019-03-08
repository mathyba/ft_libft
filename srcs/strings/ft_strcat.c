/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:33:30 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:06:11 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends the s1 string to the s2 string, ensuring a terminating null byte in
** the resulting s2 string.
** Behavior is unpredictable if s2 is not large enough for s1 and s2
** concatenation.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	char *cat;

	cat = s1;
	while (*cat)
		++cat;
	while (*s2)
	{
		*cat = *s2;
		++cat;
		++s2;
	}
	*cat = 0;
	return (s1);
}
