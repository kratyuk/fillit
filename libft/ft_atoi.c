/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:43:42 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/22 20:43:20 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	while (ft_iswhitespace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= 48 && *s <= 57)
	{
		if (res * 10 / 10 != res || res * 10 + *s - 48 < 0)
		{
			if (sign < 0)
				return (0);
			return (-1);
		}
		res = res * 10 + *(s++) - 48;
	}
	return (res * sign);
}
