/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <idamion-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:42:56 by ntothmur          #+#    #+#             */
/*   Updated: 2019/02/05 18:34:34 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_if_one(int ***arr)
{
	int		i;
	int		max;

	i = -1;
	max = 0;
	ft_zanulenie(arr[0]);
	while (++i < 4)
	{
		if (arr[0][i][0] > max)
			max = arr[0][i][0];
		if (arr[0][i][1] > max)
			max = arr[0][i][1];
	}
	print_map(arr, 1, max + 1);
	del_arr(arr, 1);
}

void	ft_work_arr(int ***arr, int kolich)
{
	int		border;
	int		j;

	border = ft_sqrt(kolich * 4);
	ft_zanulenie(arr[0]);
	while (1)
	{
		if (check_over_border(arr[0], border) != 1)
		{
			ft_zanulenie(arr[0]);
			border++;
			continue;
		}
		j = 0;
		while (++j < kolich)
			ft_zanulenie(arr[j]);
		if (ft_perebor(arr, border, kolich, 1)
				&& check_changes(arr, 0, kolich - 1))
		{
			print_map(arr, kolich, border);
			del_arr(arr, kolich);
			return ;
		}
		ft_smeshenie(arr[0], border);
	}
}

void	del_arr(int ***arr, int kolich)
{
	int i;
	int j;

	i = -1;
	while (++i < kolich)
	{
		j = -1;
		while (++j < 4)
			free(arr[i][j]);
		free(arr[i]);
	}
	free(arr);
}

void	print_map(int ***arr, int kolich, int border)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	while (++i < border)
	{
		j = -1;
		while (++j < border)
		{
			if ((k = check_lasttime(arr, kolich, i, j)) >= 0)
				ft_putchar('A' + k);
			else
				write(1, ".", 1);
		}
		write(1, "\n", 1);
	}
}

int		check_lasttime(int ***arr, int kolich, int i, int j)
{
	int		i0;
	int		j0;

	i0 = -1;
	while (++i0 < kolich)
	{
		j0 = -1;
		while (++j0 < 4)
		{
			if (arr[i0][j0][0] == i && arr[i0][j0][1] == j)
				return (i0);
		}
	}
	return (-69);
}
