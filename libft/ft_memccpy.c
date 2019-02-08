/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:28:58 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/14 15:44:41 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destptr, const void *srcptr, int c, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	if (destptr == srcptr)
		return (destptr);
	str1 = (unsigned char *)destptr;
	str2 = (unsigned char *)srcptr;
	i = 0;
	while (num)
	{
		str1[i] = str2[i];
		if (str2[i] == (unsigned char)c)
			return (destptr + i + 1);
		i++;
		num--;
	}
	return (NULL);
}
