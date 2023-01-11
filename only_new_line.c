/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_new_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:44 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/05 19:17:17 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	only_new_line_one(char *map, int i)
{
	while (map[i])
	{
		if (map[i] == '\n' && map[i - 1] == '\n')
		{
			write(1, "error : empty line in the map \n", 31);
			return (0);
		}
		i++;
	}
	if (map[i] == '\0' && map[i - 1] == '\n')
	{
		write(1, "error : empty line in the map \n", 31);
		return (0);
	}
	return (1);
}

int	only_new_line(char *map)
{
	int	i;

	if (!map)
	{
		write(1, "Error : empty file.\n", 20);
		exit(-1);
	}
	if (map[0] == '\n')
	{
		write(1, "Error : empty line in the map.\n", 31);
		exit(-1);
	}
	i = 1;
	return (only_new_line_one(map, i));
}
