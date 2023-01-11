/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VALID_PATH_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:27 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:36:46 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_path_e_c_one(char **map2d, int i, int j)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'C')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	valid_path_e_c(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	return (valid_path_e_c_one(map2d, i, j));
}

void	valid_path_water(char **map2d, int i, int j)
{
	if (map2d[i + 1][j] != 'P' && map2d[i + 1][j] != '1'
		&& map2d[i + 1][j] != 'E' && map2d[i + 1][j] != 'D')
		map2d[i + 1][j] = 'P';
	else if (map2d[i - 1][j] != 'P' && map2d[i - 1][j] != '1'
		&& map2d[i - 1][j] != 'E' && map2d[i - 1][j] != 'D')
		map2d[i - 1][j] = 'P';
	else if (map2d[i][j + 1] != 'P' && map2d[i][j + 1] != '1'
		&& map2d[i][j + 1] != 'E' && map2d[i][j + 1] != 'D')
		map2d[i][j + 1] = 'P';
	else if (map2d[i][j - 1] != 'P' && map2d[i][j - 1] != '1'
		&& map2d[i][j - 1] != 'E' && map2d[i][j - 1] != 'D')
		map2d[i][j - 1] = 'P';
}

int	valid_path_check_one(char **map2d, int i, int j)
{
	while (valid_path_e_c(map2d) && valid_path_p_way(map2d))
	{
		i = 0;
		while (map2d[i])
		{
			j = 0;
			while (map2d[i][j])
			{
				if (map2d[i][j] == 'P')
					valid_path_water(map2d, i, j);
				j++;
			}
			i++;
		}
	}
	if (valid_path_e_c(map2d))
	{
		write(1, "you can't win in this map \n", 27);
		return (0);
	}
	return (1);
}

int	valid_path_check(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	return (valid_path_check_one(map2d, i, j));
}
