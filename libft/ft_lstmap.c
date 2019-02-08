/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:32:16 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/13 16:16:09 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *content, size_t content_size)
{
	if (content)
		free(content);
	content_size = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*temp;

	if (!f)
		return (NULL);
	if (lst != NULL)
	{
		newlist = f(lst);
		temp = newlist;
		while (lst->next)
		{
			if (!(temp->next = f(lst->next)))
				ft_lstdel(&newlist, del);
			lst = lst->next;
			temp = temp->next;
		}
		return (newlist);
	}
	return (NULL);
}
