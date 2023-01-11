/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:52 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:34:51 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_movements_one(char **map2d, int i, int kc, t_vars *vars)
{
	int	j;

	j = 0;
	if (kc == 13)
		player_movements_up(map2d, i, j, vars);
	else if (kc == 0)
		player_movements_left(map2d, i, j, vars);
	else if (kc == 1)
		player_movements_down(map2d, i, j, vars);
	else if (kc == 2)
		player_movements_right(map2d, i, j, vars);
	else if (kc == 53)
	{
		write(1, "you have prissed ESC!\n", 21);
		exit(-1);
	}
}

int	player_movements(int keycode, t_vars *vars)
{
	char	**map2d;
	int		i;

	map2d = vars->map2d;
	i = 0;
	player_movements_one(map2d, i, keycode, vars);
	return (0);
}
