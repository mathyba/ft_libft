/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:31:05 by emuckens          #+#    #+#             */
/*   Updated: 2018/11/26 14:46:14 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds element pointed to by new at the beginning of list pointed to by alst.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (*alst)
	{
		new->prev = (*alst)->prev;
		(*alst)->prev = new;
	}
	new->next = *alst;
	*alst = new;
}
