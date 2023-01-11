/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_movements_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:56:25 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:33:30 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_sswap(char *c1, char *c2)
{
	if (*c2 == 'P')
		game_over();
	*c2 = *c1;
	*c1 = '0';
}

void	move_down_one(char **map2d, int i, int j, int p_j)
{
	if (map2d[i + 1][j] == '0' || map2d[i + 1][j] == 'P')
		ft_sswap(&map2d[i][j], &map2d[i + 1][j]);
	else if (p_j > i && (map2d[i][j + 1] == '0' || map2d[i][j + 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j + 1]);
	else if (p_j < i && (map2d[i][j - 1] == '0' || map2d[i][j - 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j - 1]);
}

int	move_down(char **map2d, int i, int j, int p_j)
{
	if (map2d[i + 1][j] == '0' || map2d[i + 1][j] == 'P')
		ft_sswap(&map2d[i][j], &map2d[i + 1][j]);
	else if (map2d[i + 1][j] == 'D')
		move_down_one(map2d, i + 1, j, p_j);
	else if (p_j > i && (map2d[i][j + 1] == '0' || map2d[i][j + 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j + 1]);
	else if (p_j > i && (map2d[i][j + 1] == 'D'))
		move_down_one(map2d, i, j + 1, p_j);
	else if (p_j < i && (map2d[i][j - 1] == '0' || map2d[i][j - 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j - 1]);
	else if (p_j < i && (map2d[i][j - 1] == 'D'))
		move_down_one(map2d, i, j - 1, p_j);
	else
		return (0);
	return (1);
}

void	move_up_one(char **map2d, int i, int j, int p_j)
{
	if (map2d[i - 1][j] == '0' || map2d[i - 1][j] == 'P')
		ft_sswap(&map2d[i][j], &map2d[i - 1][j]);
	else if (p_j > i && (map2d[i][j + 1] == '0' || map2d[i][j + 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j + 1]);
	else if (p_j < i && (map2d[i][j - 1] == '0' || map2d[i][j - 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j - 1]);
}

int	move_up(char **map2d, int i, int j, int p_j)
{
	if (map2d[i - 1][j] == '0' || map2d[i - 1][j] == 'P')
		ft_sswap(&map2d[i][j], &map2d[i - 1][j]);
	else if (map2d[i - 1][j] == 'D')
		move_up_one(map2d, i - 1, j, p_j);
	else if (p_j > i && (map2d[i][j + 1] == '0' || map2d[i][j + 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j + 1]);
	else if (p_j > i && (map2d[i][j + 1] == 'D'))
		move_up_one(map2d, i, j + 1, p_j);
	else if (p_j < i && (map2d[i][j - 1] == '0' || map2d[i][j - 1] == 'P'))
		ft_sswap(&map2d[i][j], &map2d[i][j - 1]);
	else if (p_j < i && (map2d[i][j - 1] == 'D'))
		move_up_one(map2d, i, j - 1, p_j);
	else
		return (0);
	return (1);
}
