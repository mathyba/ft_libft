/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:42:54 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:20:37 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares the first n bytes (as unsigned chars) of the memory area s1 and s2.
** Returns an integer less than, equal to, or greater than zero if the first n
** bytes of s1 isfound, respectively, to be less than, to match, or be greater
** than the first n bytes of s2.
** For a nonzero return value, the sign is determined by the sign of the
** difference between the first pair of bytes that differ in s1 and s2.
** If n is zero, the return value is zero.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_cpy;
	char	*s2_cpy;
	size_t	i;

	i = 0;
	s1_cpy = (char *)(unsigned long)s1;
	s2_cpy = (char *)(unsigned long)s2;
	while (n && s1_cpy[i] == s2_cpy[i])
	{
		i++;
		n--;
	}
	return (!n ? 0 : (unsigned char)s1_cpy[i] - (unsigned char)s2_cpy[i]);
}
