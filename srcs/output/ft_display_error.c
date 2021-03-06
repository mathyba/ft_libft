/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:17:24 by emuckens          #+#    #+#             */
/*   Updated: 2018/06/12 20:43:52 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints error message and msg details in argument.
** Returns -1 to enable return failure detection.
*/

int		ft_display_error(char *msg)
{
	ft_printf("error | %s\n", msg);
	return (-1);
}
