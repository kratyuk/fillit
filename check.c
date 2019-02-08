/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 14:28:22 by ntothmur          #+#    #+#             */
/*   Updated: 2019/02/04 14:13:37 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_c(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && (((i + 1) % 21) != 0
				&& (i - (i / 21) * 21) % 5 != 4))
			return (0);
		if (str[i] != '\n' && str[i] != '#' && str[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		check_len(char *str)
{
	if (((ft_strlen(str) + 1) % 21) != 0)
		return (0);
	return (1);
}

int		check_squad(char *str)
{
	int		i;
	int		count_dot;
	int		count_sharp;
	int		count_slash;

	i = -1;
	count_dot = 0;
	count_sharp = 0;
	count_slash = 0;
	while (str[++i])
	{
		if (str[i] == '.')
			count_dot++;
		if (str[i] == '#')
			count_sharp++;
	}
	if (((12 * (ft_strlen(str) + 1)) / 21) != count_dot ||
				((4 * (ft_strlen(str) + 1)) / 21) != count_sharp)
		return (0);
	return (1);
}

int		check_tetr(char *str, int i)
{
	int		j;
	int		count;

	j = 19;
	while (j <= (int)ft_strlen(str) && i < (int)ft_strlen(str))
	{
		count = 0;
		while (str[i] && i <= j)
		{
			if (str[i] == '#')
			{
				if (str[i + 1] == '#' && (i + 1 <= j))
					count++;
				if (str[i + 5] == '#' && (i + 5 <= j))
					count++;
			}
			i++;
		}
		if (count < 3)
			return (0);
		i++;
		j = i + 19;
	}
	return (1);
}

int		check_map(char *str)
{
	if (check_c(str) == 0 || check_len(str) == 0 || check_squad(str) == 0
		|| check_tetr(str, 0) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}
