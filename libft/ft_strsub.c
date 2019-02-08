/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:10:31 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/12 18:45:13 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	if (!s)
		return (0);
	newstr = ft_strnew(len);
	i = 0;
	if (newstr == NULL)
		return (NULL);
	while (len > i)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	return (newstr);
}
