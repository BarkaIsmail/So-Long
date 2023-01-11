/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ENEMY_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:56:09 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 13:56:56 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_enemy_i(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' || map2d[i][j] == 'Z')
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	move_enemy_j(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' || map2d[i][j] == 'Z')
			{
				return (j);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	move_enemy_two(char **map2d, int i, int j)
{
	int	p_i;
	int	p_j;

	p_i = move_enemy_i(map2d);
	p_j = move_enemy_j(map2d);
	if (p_i > i)
	{
		if (move_down(map2d, i, j, p_j))
			return (1);
	}
	else if (p_i < i)
	{
		if (move_up(map2d, i, j, p_j))
			return (1);
	}
	else if (p_i == i)
	{
		if (move_(map2d, i, j, p_j))
			return (1);
	}
	return (0);
}

void	move_enemy_one(char **map2d, int i, int j)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'D')
			{
				if (move_enemy_two(map2d, i, j))
					return ;
			}
			j++;
		}
		i++;
	}
}

int	move_enemy(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	move_enemy_one(map2d, i, j);
	return (0);
}
