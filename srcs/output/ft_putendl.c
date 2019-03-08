/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:11:24 by emuckens          #+#    #+#             */
/*   Updated: 2018/03/21 11:39:46 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Similar to ft_putstr, excepts it adds a new_line.
*/

void	ft_putendl(char *s)
{
	if (!s)
		return ;
	ft_putstr(s);
	ft_putchar('\n');
}
