/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:24:28 by emuckens          #+#    #+#             */
/*   Updated: 2018/10/12 19:33:37 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares to two strings s1 and s2. Returns 0 if a differing byte is found,
** or 0 otherwise.
*/

int		ft_strequ(const char *s1, const char *s2)
{
	return (s1 && s2 ? !ft_strcmp(s1, s2) : 0);
}
