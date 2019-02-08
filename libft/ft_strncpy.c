/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:27:14 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/05 19:24:20 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	int		i;

	i = 0;
	if (!num)
		return (destptr);
	while (num && srcptr[i] != '\0')
	{
		destptr[i] = srcptr[i];
		i++;
		num--;
	}
	while (num)
	{
		destptr[i] = '\0';
		i++;
		num--;
	}
	return (destptr);
}
