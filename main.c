/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 17:07:21 by ntothmur          #+#    #+#             */
/*   Updated: 2019/02/04 19:23:37 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	buf[550];
	int		fd;
	int		i;

	if (argc != 2)
	{
		ft_putstr("Usage: ./fillit input_file\n");
		return (0);
	}
	if (!(fd = open(argv[argc - 1], O_RDONLY)))
	{
		ft_putstr("error\n");
		return (0);
	}
	i = read(fd, buf, 550);
	if (i < 1 || i > 546)
	{
		ft_putstr("error\n");
		return (0);
	}
	buf[i] = '\0';
	if (check_map(buf) == 0)
		return (0);
	ft_fillit(buf, (((int)ft_strlen(buf)) + 1) / 21);
}
