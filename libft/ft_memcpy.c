/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:21:04 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/12 16:09:06 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
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
		i++;
		num--;
	}
	return (destptr);
}
