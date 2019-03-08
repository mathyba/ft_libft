/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_strtabsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:14:02 by emuckens          #+#    #+#             */
/*   Updated: 2018/10/24 14:41:45 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Scans array of strings and returns its size.
** Behavior is unpredictable if array of strings is not null-terminated.
*/

int	ft_get_strtabsize(char **str)
{
	int size;

	size = 0;
	while (*(str + size))
		++size;
	return (size);
}
