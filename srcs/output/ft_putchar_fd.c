/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:14:35 by emuckens          #+#    #+#             */
/*   Updated: 2018/05/20 14:56:43 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Writes the character c, cast to an unsigned char, to fd stream.
*/

void	ft_putchar_fd(int c, int fd)
{
	write(fd, (unsigned char *)&c, 1);
}
