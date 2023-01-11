/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:55 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:35:10 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_name(char *mapber)
{
	int	i;

	i = 0;
	while (mapber[i])
		i++;
	i--;
	if (mapber[i] != 'r' || mapber[i -1] != 'e'
		|| mapber[i - 2] != 'b' || mapber[i - 3] != '.')
	{
		write(1, "extention error\n", 16);
		exit(-1);
	}
}

char	**read_map2d(char *mapber)
{
	char	**map2d;
	char	*map;
	char	*str;
	int		fd;

	check_name(mapber);
	fd = open((const char *)mapber, O_RDONLY);
	if (fd == -1)
	{
		write(1, "cound not find the map\n", 23);
		exit(-1);
	}
	str = NULL;
	map = NULL;
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		map = ft_strjoin(map, str);
		free(str);
	}
	map2d = ft_split(map, '\n');
	free(map);
	return (map2d);
}

char	*read_map(char *mapber)
{
	int		fd;
	char	*map;
	char	*str;

	map = NULL;
	fd = open(mapber, O_RDONLY);
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		map = ft_strjoin(map, str);
		free(str);
	}
	return (map);
}
