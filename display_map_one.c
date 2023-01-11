/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:26:31 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:31:08 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	c_h(char **map2)
{
	int	i;

	i = 0;
	while (map2[i])
		i++;
	return (i);
}

int	c_w(char **map2)
{
	int	i;

	i = 0;
	while (map2[0][i])
		i++;
	return (i);
}

void	display_map_two(char **map2, int i, int j, t_vars v)
{
	if (map2[i][j] == 'P')
		mlx_put_image_to_window(v.p, v.w, v.p_i, j * 64, i * 64);
	else if (map2[i][j] == '0')
		mlx_put_image_to_window(v.p, v.w, v.b_i, j * 64, i * 64);
	else if (map2[i][j] == '1')
		mlx_put_image_to_window(v.p, v.w, v.w_i, j * 64, i * 64);
	else if (map2[i][j] == 'C')
		mlx_put_image_to_window(v.p, v.w, v.c_i, j * 64, i * 64);
	else if (map2[i][j] == 'E')
		mlx_put_image_to_window(v.p, v.w, v.do_i, j * 64, i * 64);
	else if (map2[i][j] == 'X')
		mlx_put_image_to_window(v.p, v.w, v.dc_i, j * 64, i * 64);
	else if (map2[i][j] == 'D')
		mlx_put_image_to_window(v.p, v.w, v.d_i, j * 64, i * 64);
	else if (map2[i][j] == 'Z')
		mlx_put_image_to_window(v.p, v.w, v.d_z, j * 64, i * 64);
}

void	update_display_two(t_vars *v, int i, int j)
{
	if (v->map2d[i][j] == 'P')
		mlx_put_image_to_window(v->p, v->w, v->p_i, j * 64, i * 64);
	else if (v->map2d[i][j] == '0')
		mlx_put_image_to_window(v->p, v->w, v->b_i, j * 64, i * 64);
	else if (v->map2d[i][j] == '1')
		mlx_put_image_to_window(v->p, v->w, v->w_i, j * 64, i * 64);
	else if (v->map2d[i][j] == 'C')
		mlx_put_image_to_window(v->p, v->w, v->c_i, j * 64, i * 64);
	else if (v->map2d[i][j] == 'E')
		mlx_put_image_to_window(v->p, v->w, v->dc_i, j * 64, i * 64);
	else if (v->map2d[i][j] == 'X')
		mlx_put_image_to_window(v->p, v->w, v->do_i, j * 64, i * 64);
	else if (v->map2d[i][j] == 'D')
		mlx_put_image_to_window(v->p, v->w, v->d_i, j * 64, i * 64);
	else if (v->map2d[i][j] == 'Z')
		mlx_put_image_to_window(v->p, v->w, v->d_z, j * 64, i * 64);
}
