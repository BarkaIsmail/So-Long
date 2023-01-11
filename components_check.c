/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   COMPONENTS_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:55:59 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:29:39 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	componenets_chech_four(void)
{
	write(1, "error : undeffined character.\n", 30);
	exit(-1);
}

void	componenets_chech_three(t_check *var, char c)
{
	if (c == 'E')
	{
		if (var->check_e == 1)
		{
			write(1, "error : more than one Exit\n", 27);
			exit(-1);
		}
			var->check_e = 1;
	}
	else if (c == 'P')
	{
		if (var->check_p == 1)
		{
			write(1, "error : more than one Player\n", 29);
			exit(-1);
		}
			var->check_p = 1;
	}
}

void	componenets_chech_two(char **map2d, t_check *var, int i, int j)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			if (map2d[i][j] == '0')
				var->check_0 = 1;
			else if (map2d[i][j] == '1')
				var->check_1 = 1;
			else if (map2d[i][j] == 'C')
				var->check_c = 1;
			else if (map2d[i][j] == 'E')
				componenets_chech_three(var, map2d[i][j]);
			else if (map2d[i][j] == 'P')
				componenets_chech_three(var, map2d[i][j]);
			else
				componenets_chech_four();
			j++;
		}
		i++;
	}
}

int	componenets_chech_one(char **map2d, int i, int j, t_check *var)
{
	componenets_chech_two(map2d, var, i, j);
	if (var->check_0 == 1 && var->check_1 == 1
		&& var->check_c == 1 && var->check_e == 1 && var->check_p == 1)
		return (1);
	write(1, "error : not all character in the map.\n", 38);
	return (0);
}

int	components_check(char **map2d)
{
	int		i;
	int		j;
	t_check	vars;

	i = 0;
	j = 0;
	vars.check_0 = 0;
	vars.check_1 = 0;
	vars.check_c = 0;
	vars.check_e = 0;
	vars.check_p = 0;
	return (componenets_chech_one(map2d, i, j, &vars));
}
