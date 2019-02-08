/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:20:00 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/05 19:27:16 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*destptr;
	unsigned char	*srcptr;

	destptr = (unsigned char *)dest;
	srcptr = (unsigned char *)src;
	i = 0;
	if (dest > src)
	{
		while (num)
		{
			destptr[num - 1] = srcptr[num - 1];
			num--;
		}
	}
	if (dest <= src)
	{
		while (i < num)
		{
			destptr[i] = srcptr[i];
			i++;
		}
	}
	return (dest);
}
