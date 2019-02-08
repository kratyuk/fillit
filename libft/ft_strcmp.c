/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:24:18 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/27 15:35:58 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				j;
	unsigned char	*k;
	unsigned char	*l;

	k = (unsigned char *)s1;
	l = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (666);
	while (k[i] != '\0' && l[j] != '\0')
	{
		if (k[i] != l[j])
			return (k[i] - l[j]);
		i++;
		j++;
	}
	if (k[i] != '\0')
		return (k[i]);
	if (l[j] != '\0')
		return (-l[j]);
	return (0);
}
