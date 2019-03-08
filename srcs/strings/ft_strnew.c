/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:00:13 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/26 11:42:02 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates new string of size in parameters, adds a terminating null byte and
** sets all bytes of new string to '\0'.
*/

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc((size + 1))))
		return (NULL);
	bzero(str, size + 1);
	return (str);
}
