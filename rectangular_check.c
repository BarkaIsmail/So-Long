/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangular_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:58 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:35:17 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	rectangular_check_one(char **map2d, int i, int j, int count)
{
	while (map2d[0][j])
	{
		count++;
		j++;
	}
	j = 0;
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			j++;
		}
		if (j != count)
		{
			write(1, "error : the map is not rectangular\n", 35);
			return (0);
		}
		i++;
	}
	return (1);
}

int	rectangular_check(char **map2d)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	j = 0;
	return (rectangular_check_one(map2d, i, j, count));
}
