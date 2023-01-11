/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LOSE_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:40:37 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 14:04:58 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_lose_game(char **map2d, int i, int j)
{
	map2d[i][j] = 'D';
	write(1, "GAME OVER!\n", 11);
	exit(-1);
}

void	game_over(void)
{
	write(1, "GAME OVER!\n", 11);
	exit(-1);
}
