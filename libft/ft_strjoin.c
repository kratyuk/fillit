/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:22:05 by ntothmur          #+#    #+#             */
/*   Updated: 2018/12/29 18:38:42 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*constr;

	if (!s1 || !s2)
		return (NULL);
	constr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (constr == NULL)
		return (NULL);
	ft_strcpy(constr, s1);
	ft_strcat(constr, s2);
	return (constr);
}
