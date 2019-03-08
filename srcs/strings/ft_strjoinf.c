/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:51:02 by emuckens          #+#    #+#             */
/*   Updated: 2018/01/09 14:58:27 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_strjoin, excepts it frees and sets pointer to NULL for
** s1 (to_free=1), s2 (to_free=2) or both (to_free=3) before returning
** null_terminated newly-allocated string with s1 and s2 concatenation.
** (If to_free is not 1, 2, or 3, the function behaves exactly like ft_strjoin.)
*/

char	*ft_strjoinf(char *s1, char *s2, int to_free)
{
	char *str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	str = ft_strcat(str, s1);
	str = ft_strcat(str, s2);
	if ((to_free == 1 || to_free == 3) && s1)
		ft_strdel((char **)&s1);
	if ((to_free == 2 || to_free == 3) && s2)
		ft_strdel((char **)&s2);
	return (str);
}
