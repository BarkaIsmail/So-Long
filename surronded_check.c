/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SURRONDED_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:07 by isbarka           #+#    #+#             */
/*   Updated: 2022/12/28 15:26:34 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	surrounded_check(char **map2d)
{
	if (surronded_up_check(map2d) && surronded_down_check(map2d)
		&& surronded_left_check(map2d) && surronded_right_check(map2d))
		return (1);
	write(1, "error : the map is not surronded by walls\n", 42);
	return (0);
}
