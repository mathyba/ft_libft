/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstrarr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:10:19 by emuckens          #+#    #+#             */
/*   Updated: 2017/12/22 11:42:42 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Displays array of strings pointed to by argument.
** Behavior is unpredictable if the array is not null-terminated.
** Use for debugging purposes.
*/


void		ft_printstrarr(char **arr)
{
	while (*arr)
	{
		ft_putstr(*arr);
		ft_putchar('\n');
		arr++;
	}
}
