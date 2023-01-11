/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surronded_right_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:14 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:36:11 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	j_len(char **map2d)
{
	int	j;

	j = 0;
	while (map2d[0][j])
	{
		j++;
	}
	return (j - 1);
}

int	surronded_right_check(char **map2d)
{
	int	i;
	int	j;

	i = 0;
	j = j_len(map2d);
	while (map2d[i])
	{
		if (map2d[i][j] != '1')
			return (0);
		i++;
	}
	return (1);
}
