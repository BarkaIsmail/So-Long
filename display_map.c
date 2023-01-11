/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DISPLAY_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:25:30 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 15:32:50 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	update_display_one(t_vars *v, int i, int j)
{
	char	*str;

	while (v->map2d[i])
	{
		j = 0;
		while (v->map2d[i][j])
		{
			update_display_two(v, i, j);
			j++;
		}
		i++;
	}
	str = ft_itoa(v->count);
	mlx_string_put(v->p, v->w, 10, 10, 0x000000, str);
	free(str);
}

int	update_display(void *vars_ptr)
{
	t_vars	*vars;
	int		i;
	int		j;

	i = 0;
	j = 0;
	vars = (t_vars *)vars_ptr;
	open_dore(vars->map2d);
	win(vars->map2d);
	mlx_clear_window(vars->p, vars->w);
	update_display_one(vars, i, j);
	return (0);
}

void	display_map_one(char **map2d, int i, int j, t_vars v)
{
	while (map2d[i])
	{
		j = 0;
		while (map2d[i][j])
		{
			display_map_two(map2d, i, j, v);
			j++;
		}
		i++;
	}
}

int	destroy(t_vars *s)
{
	mlx_destroy_window(s->p, s->w);
	exit (0);
	return (0);
}

void	display_map(char **map2d)
{
	int			i;
	int			j;
	t_vars		v;

	i = 0;
	j = 0;
	v.count = 0;
	v.count_frames = 0;
	v.p = mlx_init();
	v.w = mlx_new_window(v.p, c_w(map2d) * 64, c_h(map2d) * 64, "i");
	v.b_i = mlx_xpm_file_to_image(v.p, "Sprits/B.xpm", &v.wi, &v.hi);
	v.c_i = mlx_xpm_file_to_image(v.p, "Sprits/C.xpm", &v.wi, &v.hi);
	v.p_i = mlx_xpm_file_to_image(v.p, "Sprits/P.xpm", &v.wi, &v.hi);
	v.w_i = mlx_xpm_file_to_image(v.p, "Sprits/W.xpm", &v.wi, &v.hi);
	v.dc_i = mlx_xpm_file_to_image(v.p, "Sprits/DC.xpm", &v.wi, &v.hi);
	v.do_i = mlx_xpm_file_to_image(v.p, "Sprits/DO.xpm", &v.wi, &v.hi);
	v.d_i = mlx_xpm_file_to_image(v.p, "Sprits/D.xpm", &v.wi, &v.hi);
	v.d_z = mlx_xpm_file_to_image(v.p, "Sprits/Z.xpm", &v. wi, &v.hi);
	display_map_one(map2d, i, j, v);
	v.map2d = map2d;
	mlx_hook(v.w, 2, 0, player_movements, &v);
	mlx_string_put(v.p, v.w, 10, 10, 0xFFFFFF, "hello");
	mlx_loop_hook(v.p, update_display, &v);
	mlx_hook(v.w, 17, 0, destroy, &v);
	mlx_loop(v.p);
}
