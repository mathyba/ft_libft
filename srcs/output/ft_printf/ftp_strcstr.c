/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_strcstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 11:53:52 by emuckens          #+#    #+#             */
/*   Updated: 2018/03/31 22:33:19 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ftp_strcstr(char *str, char *chars)
{
	int i;
	int j;

	i = 0;
	if (!chars)
		return (-1);
	while (str[i])
	{
		j = 0;
		while (chars[j])
		{
			if (str[i] == chars[j])
				return (i);
			j++;
		}
		++i;
	}
	return (-1);
}
