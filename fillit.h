/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 14:43:40 by ntothmur          #+#    #+#             */
/*   Updated: 2019/02/04 17:23:39 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		check_c(char *str);
int		check_len(char *str);
int		check_squad(char *str);
int		check_tetr(char *str, int i);
int		check_map(char *str);
int		ft_perebor(int ***arr, int border, int kolich, int j);
void	ft_smeshenie(int **arr, int border);
int		check_changes(int ***arr, int i, int j);
int		check_changes_inside(int ***arr, int j);
int		check_over_border(int **arr, int border);
int		check_coor(int ***arr, int i, int j);
void	ft_fill_in_arr(char *str, int ***arr);
void	ft_fillit(char *str, int i);
int		ft_sqrt(int i);
int		min_coordinate_col(int **arr);
int		min_coordinate_line(int **arr);
void	ft_zanulenie(int **arr);
void	plus_one_col(int **arr);
void	plus_row(int **arr, int row);
void	ft_if_one(int ***arr);
void	ft_work_arr(int ***arr, int kolich);
void	del_arr(int ***arr, int kolich);
void	print_map(int ***arr, int kolich, int border);
int		check_lasttime(int ***arr, int kolich, int i, int j);

#endif
