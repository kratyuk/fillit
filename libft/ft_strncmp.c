/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:46:47 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/05 19:24:51 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*k;
	unsigned char	*l;

	k = (unsigned char *)s1;
	l = (unsigned char *)s2;
	i = 0;
	j = 0;
	while (k[i] != '\0' && l[j] != '\0' && i < n && j < n)
	{
		if (k[i] != l[j])
			return (k[i] - l[j]);
		i++;
		j++;
	}
	if (k[i] != '\0' && i < n && j < n)
		return (k[i]);
	if (l[j] != '\0' && i < n && j < n)
		return (-l[j]);
	return (0);
}
