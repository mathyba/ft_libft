/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:56:28 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/18 11:57:44 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Erases the data in the n bytes of the memory starting at the location
** pointed to by s, by writing zeroes to that area.
** Be aware of security issues as detailed in the official Programmer's manual.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
