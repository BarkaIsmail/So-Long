/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surronded_down_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:09 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:36:00 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	i_len(char **map2d)
{
	int	i;

	i = 0;
	while (map2d[i])
		i++;
	return (i - 1);
}

int	surronded_down_check(char **map2d)
{
	int	i;
	int	j;

	i = i_len(map2d);
	j = 0;
	while (map2d[i][j])
	{
		if (map2d[i][j] != '1')
			return (0);
		j++;
	}
	return (1);
}
