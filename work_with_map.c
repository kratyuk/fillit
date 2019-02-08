/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:47:10 by ntothmur          #+#    #+#             */
/*   Updated: 2019/02/04 19:52:10 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_perebor(int ***arr, int border, int kolich, int j)
{
	int		i;

	i = 0;
	ft_zanulenie(arr[j]);
	while (1)
	{
		if (check_changes_inside(arr, j))
			if (j <= kolich - 2)
				if (ft_perebor(arr, border, kolich, j + 1) == 1)
					return (1);
		if (j == kolich - 1 && check_over_border(arr[j], border) == 1 &&
				check_changes(arr, 0, kolich - 1))
			return (1);
		ft_smeshenie(arr[j], border);
		if (check_over_border(arr[j], border) == 2)
		{
			ft_zanulenie(arr[j]);
			return (0);
		}
	}
}

void	ft_smeshenie(int **arr, int border)
{
	int row;

	row = min_coordinate_line(arr) + 1;
	plus_one_col(arr);
	if ((check_over_border(arr, border)) == 0)
	{
		ft_zanulenie(arr);
		plus_row(arr, row);
	}
}

int		check_changes(int ***arr, int i, int j)
{
	int		to_j;

	if (check_coor(arr, i, j))
	{
		while (i < j)
		{
			to_j = -1;
			while (++to_j < j)
			{
				if (to_j == i)
					continue ;
				if (!(check_coor(arr, to_j, j)) || !(check_coor(arr, to_j, i)))
					return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

int		check_over_border(int **arr, int border)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (arr[i][0] >= border)
			return (2);
		else if (arr[i][1] >= border)
			return (0);
		i++;
	}
	return (1);
}

int		check_coor(int ***arr, int i, int j)
{
	int		k;
	int		l;

	k = 0;
	while (k < 4)
	{
		l = 0;
		while (l < 4)
		{
			if (arr[i][k][0] == arr[j][l][0] && arr[i][k][1] == arr[j][l][1])
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}
