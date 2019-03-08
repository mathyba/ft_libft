/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 18:48:33 by emuckens          #+#    #+#             */
/*   Updated: 2017/12/22 11:41:49 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Scans array of strings pointed by str and returns its length.
** Behavior is unpredictable if the array if not null-terminated.
*/

int		ft_strarrlen(char **str)
{
	int i;

	i = 0;
	if (!(*str))
		return (-1);
	while (*str)
	{
		++i;
		++str;
	}
	return (i);
}
