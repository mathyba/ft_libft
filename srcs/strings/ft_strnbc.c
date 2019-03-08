/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnbc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:54:46 by emuckens          #+#    #+#             */
/*   Updated: 2017/12/22 11:44:00 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of times character c i s found in string str, terminating
** null byte excluded.
*/

int		ft_strnbc(char *str, char c)
{
	if (!(*str))
		return (0);
	return (*str == c ? ft_strnbc(str + 1, c) + 1 : ft_strnbc(str + 1, c));
}
