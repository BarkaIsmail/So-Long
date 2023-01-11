/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surronded_left_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:12 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:36:06 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	surronded_left_check(char **map2d)
{
	int	i;

	i = 0;
	while (map2d[i])
	{
		if (map2d[i][0] != '1')
			return (0);
		i++;
	}
	return (1);
}
