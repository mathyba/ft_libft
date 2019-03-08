/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcnl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 11:56:31 by emuckens          #+#    #+#             */
/*   Updated: 2018/03/19 11:56:47 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Simliar to ft_putchar, except it adds a new_line.
*/

void	ft_putcnl(char c)
{
	ft_putchar(c);
	ft_putchar('\n');
}
