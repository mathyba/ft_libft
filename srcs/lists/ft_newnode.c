/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuckens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 13:29:25 by emuckens          #+#    #+#             */
/*   Updated: 2018/11/26 13:29:42 by emuckens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns new binary tree node, allocates content and copies
** content_siz bytes of content pointed to by pointer in parameters into it.
** Sets left and right links to NULL.
*/

t_lbtree	*ft_newnode(void *content, int content_size)
{
	t_lbtree	*new;

	if (!content)
		return (NULL);
	if (!(new = ft_memalloc(content_size)))
		return (NULL);
	if (!(new->content = ft_memalloc(content_size)))
		return (NULL);
	ft_memmove(&new->content, content, content_size);
	new->left = NULL;
	new->right = NULL;
	return (new);
}
