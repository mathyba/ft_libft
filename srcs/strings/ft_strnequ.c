/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:33:06 by emuckens          #+#    #+#             */
/*   Updated: 2017/11/21 18:55:15 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_strequ, except it compares at most n bytes.
*/

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	return (s1 && s2 ? !ft_strncmp(s1, s2, n) : 0);
}
