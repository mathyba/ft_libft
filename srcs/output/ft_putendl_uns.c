/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_uns.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:11:24 by emuckens          #+#    #+#             */
/*   Updated: 2018/03/29 10:26:06 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_putendl, except it handles strings of unsigned chars.
*/

void	ft_putendl_uns(unsigned char *s)
{
	if (!s)
		return ;
	ft_putstr((char *)s);
	ft_putchar('\n');
}
