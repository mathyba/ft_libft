/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:08:54 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:04:50 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Similar to ft_strsub, except it takes an additional pointer on string as
** parameter, frees the string it points to and sets pointer to NULL.
*/

char	*ft_strsubf(char const *s, unsigned int beg, size_t len, char *to_free)
{
	ft_strsub(s, beg, len);
	ft_strdel(&to_free);
	return ((char *)s);
}
