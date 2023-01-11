/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path_p_way.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:32 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:37:02 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_path_p_can_move(char **map2d, int i, int j)
{
	if (map2d[i + 1][j] != 'P'
		&& map2d[i + 1][j] != '1'
			&& map2d[i + 1][j] != 'E' && map2d[i + 1][j] != 'D')
		return (1);
	else if (map2d[i - 1][j] != 'P'
		&& map2d[i - 1][j] != '1'
			&& map2d[i - 1][j] != 'E' && map2d[i - 1][j] != 'D')
		return (1);
	else if (map2d[i][j + 1] != 'P'
		&& map2d[i][j + 1] != '1'
			&& map2d[i][j + 1] != 'E' && map2d[i][j + 1] != 'D')
		return (1);
	else if (map2d[i][j - 1] != 'P'
		&& map2d[i][j - 1] != '1'
			&& map2d[i][j - 1] != 'E' && map2d[i][j - 1] != 'D')
		return (1);
	return (0);
}

int	valid_path_p_way_one(char **map2d, int i, int j)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' && valid_path_p_can_move(map2d, i, j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	valid_path_p_way(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	return (valid_path_p_way_one(map2d, i, j));
}
