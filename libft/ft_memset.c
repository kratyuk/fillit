/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:28:52 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/05 19:20:09 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)memptr;
	if (num == i)
		return (memptr);
	while (num)
	{
		str[i] = val;
		i++;
		num--;
	}
	return (memptr);
}
