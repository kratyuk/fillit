/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:26:06 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/12 19:43:56 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(unsigned int num)
{
	int		len;

	len = 0;
	if (num == 0)
		len = 1;
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*s;
	int				i;
	int				sign;
	unsigned int	num;

	num = n < 0 ? -n : n;
	sign = n < 0 ? 1 : 0;
	i = ft_count(num) + 1 + sign;
	if (!(s = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	s[--i] = '\0';
	while (i > 0)
	{
		s[--i] = num % 10 + '0';
		num = num / 10;
	}
	if (sign > 0)
		s[i] = '-';
	return (s);
}
