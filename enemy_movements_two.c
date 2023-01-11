/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_movements_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:00:11 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 14:03:44 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_(char **map2d, int i, int j, int p_j)
{
	if ((map2d[i][j + 1] == '0' || map2d[i][j + 1] == 'P') && p_j > j)
		ft_sswap(&map2d[i][j], &map2d[i][j + 1]);
	else if (map2d[i][j + 1] == 'D' && p_j > j)
		move_(map2d, i, j + 1, p_j);
	else if ((map2d[i][j - 1] == '0' || map2d[i][j - 1] == 'P') && p_j < j)
		ft_sswap(&map2d[i][j], &map2d[i][j - 1]);
	else if (map2d[i][j - 1] == 'P' && p_j < j)
		move_(map2d, i, j - 1, p_j);
	else
		return (0);
	return (1);
}
