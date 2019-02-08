/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:59:49 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/22 20:43:55 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		k;
	int		i;
	int		j;
	char	**str;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1))))
		return (NULL);
	while (s[k])
	{
		while (s[k] == c)
			k++;
		j = ft_ccount(s, k, c);
		k += j;
		if (s[k] != '\0' || j)
		{
			if (!(str[i++] = ft_strsub(s, k - j, j)))
				return (ft_free(str));
		}
	}
	str[i] = NULL;
	return (str);
}
