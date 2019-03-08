/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:33:38 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 17:05:07 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Similar to ft_strdup, except it frees and sets to NULL the pointer of
** dest (to_free=2), of src (to_free=2) or both (to_free=3).
*/

char	*ft_strdupf(char *dest, char *src, int to_free)
{
	char	*dup;
	
	(void)dest;
	dup = ft_strdup(src);
	if ((to_free == 2 || to_free == 3))
		ft_strdel(&src);
	if ((to_free == 1 || to_free == 3))
		ft_strdel(&dest);
	return (dup);
}
