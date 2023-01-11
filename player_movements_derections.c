/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements_derections.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:50 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:34:42 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_swap(char *c1, char *c2)
{
	*c1 = *c2;
	*c2 = '0';
}

void	player_movements_up(char **map2d, int i, int j, t_vars *vars)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' || map2d[i][j] == 'Z')
			{
				if (map2d[i - 1][j] != '1' && map2d[i - 1][j] != 'E'
					&& map2d[i - 1][j] != 'D')
				{
					ft_swap(&map2d[i - 1][j], &map2d[i][j]);
					vars->count = vars->count + 1;
				}
				else if (map2d[i - 1][j] == 'D')
					ft_lose_game(map2d, i, j);
				return ;
			}
			j++;
		}
		i++;
	}
}

void	player_movements_down(char **map2d, int i, int j, t_vars *vars)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' || map2d[i][j] == 'Z')
			{
				if (map2d[i + 1][j] != '1'
					&& map2d[i + 1][j] != 'E' && map2d[i + 1][j] != 'D')
				{
					ft_swap(&map2d[i + 1][j], &map2d[i][j]);
					vars->count = vars->count + 1;
				}
				else if (map2d[i + 1][j] == 'D')
					ft_lose_game(map2d, i, j);
				return ;
			}
			j++;
		}
		i++;
	}
}

void	player_movements_left(char **map2d, int i, int j, t_vars *vars)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' || map2d[i][j] == 'Z')
			{
				if (map2d[i][j -1] != '1'
					&& map2d[i][j -1] != 'E' && map2d[i][j -1] != 'D')
				{
					ft_swap(&map2d[i][j -1], &map2d[i][j]);
					map2d[i][j -1] = 'Z';
					vars->count = vars->count + 1;
				}
				else if (map2d[i][j -1] == 'D')
					ft_lose_game(map2d, i, j);
				return ;
			}
			j++;
		}
		i++;
	}
}

void	player_movements_right(char **map2d, int i, int j, t_vars *vars)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == 'P' || map2d[i][j] == 'Z')
			{
				if (map2d[i][j + 1] != '1'
					&& map2d[i][j + 1] != 'E' && map2d[i][j + 1] != 'D')
				{
					ft_swap(&map2d[i][j + 1], &map2d[i][j]);
					map2d[i][j + 1] = 'P';
					vars->count = vars->count + 1;
				}
				else if (map2d[i][j + 1] == 'D')
					ft_lose_game(map2d, i, j);
				return ;
			}
			j++;
		}
		i++;
	}
}
