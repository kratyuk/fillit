/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 13:46:49 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/13 15:37:07 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlink;

	if (del != NULL && alst)
	{
		while (*alst)
		{
			nextlink = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = nextlink;
		}
		*alst = NULL;
	}
}
