/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:50:19 by ntothmur          #+#    #+#             */
/*   Updated: 2019/02/04 14:01:30 by ntothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		min_coordinate_col(int **arr)
{
	int		i;
	int		k;

	i = arr[0][1];
	k = 1;
	while (k < 4)
	{
		if (arr[k][1] < i)
			i = arr[k][1];
		k++;
	}
	return (i);
}

int		min_coordinate_line(int **arr)
{
	int		i;
	int		k;

	i = arr[0][0];
	k = 0;
	while (k < 4)
	{
		if (arr[k][0] < i)
			i = arr[k][0];
		k++;
	}
	return (i);
}

void	ft_zanulenie(int **arr)
{
	int		j;
	int		k[2];

	j = 0;
	k[0] = min_coordinate_line(arr);
	k[1] = min_coordinate_col(arr);
	while (j < 4)
	{
		arr[j][0] -= k[0];
		arr[j][1] -= k[1];
		j++;
	}
}

void	plus_one_col(int **arr)
{
	int		i;

	i = -1;
	while (++i < 4)
		arr[i][1] += 1;
}

void	plus_row(int **arr, int row)
{
	int		i;

	i = -1;
	while (++i < 4)
		arr[i][0] += row;
}
