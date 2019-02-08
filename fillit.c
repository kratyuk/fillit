/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:35:21 by idamion-          #+#    #+#             */
/*   Updated: 2019/02/04 17:38:13 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int i)
{
	int	j;

	j = 1;
	while (1)
	{
		if ((j * j) >= i)
			return (j);
		j++;
	}
}

void	ft_fill_in_arr(char *str, int ***arr)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == '#')
		{
			arr[i / 21][j % 4][0] = (i % 21) / 5;
			arr[i / 21][j % 4][1] = (i - (i / 21) * 21) % 5;
			j++;
		}
	}
}

int		check_changes_inside(int ***arr, int j)
{
	int		to_j;

	if (check_coor(arr, j - 1, j))
	{
		to_j = -1;
		while (++to_j < j)
		{
			if (!(check_coor(arr, to_j, j)))
				return (0);
		}
		return (1);
	}
	return (0);
}

void	ft_fillit(char *str, int i)
{
	int	***arr;
	int	l;
	int	j;

	l = -1;
	if (!(arr = (int ***)malloc(sizeof(int **) * i)))
		return ;
	while (++l < i)
	{
		j = -1;
		if (!(arr[l] = (int **)malloc(sizeof(int *) * 4)))
			return ;
		while (++j <= 3)
			if (!(arr[l][j] = (int *)malloc(sizeof(int) * 2)))
				return ;
	}
	ft_fill_in_arr(str, arr);
	if (i == 1)
	{
		ft_if_one(arr);
		return ;
	}
	ft_work_arr(arr, i);
}
