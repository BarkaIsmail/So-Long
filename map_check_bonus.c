/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:41 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:28:55 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_check_bonus(char	**map2d, char	*map)
{
	if (only_new_line(map) == 0)
		return (0);
	if (components_check_bonus(map2d) == 0)
		return (0);
	if (rectangular_check(map2d) == 0)
		return (0);
	if (surrounded_check(map2d) == 0)
		return (0);
	if (valid_path_check(map2d) == 0)
		return (0);
	if (valid_path_check_exite(map2d) == 0)
		return (0);
	return (1);
}
