/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:46 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:34:26 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	no_c(char **map2d)
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
			if (map2d[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_x(char **map2d)
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
			if (map2d[i][j] == 'X')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	no_e_x(char **map2d)
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
			if (map2d[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (check_x(map2d));
}

void	open_dore(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (no_c(map2d))
	{
		while (map2d[i])
		{
			j = 0;
			while (map2d[i][j])
			{
				if (map2d[i][j] == 'E')
					map2d[i][j] = 'X';
				j++;
			}
			i++;
		}
	}
}

void	win(char **map2d)
{
	if (no_e_x(map2d))
	{
		write(1, "you win!\n", 9);
		exit(-1);
	}
}
