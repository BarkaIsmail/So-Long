/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:57:03 by isbarka           #+#    #+#             */
/*   Updated: 2023/01/02 16:30:25 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include<unistd.h>
# include<fcntl.h>
# include<stdlib.h>
# include <mlx.h>

typedef struct s_vars
{
	void	*p;
	void	*w;
	void	*w_i;
	void	*c_i;
	void	*b_i;
	void	*do_i;
	void	*dc_i;
	void	*p_i;
	void	*d_i;
	void	*d_z;
	int		wi;
	int		hi;
	char	**map2d;
	int		count;
	int		count_frames;
}	t_vars;

typedef struct components_vars
{
	int	check_0;
	int	check_1;
	int	check_c;
	int	check_e;
	int	check_p;
}	t_check;

int		test_walls(char **map2d);
void	so_long_set_window(void);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin_one(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*get_next_line(int fd);
int		components_check(char **map2d);
int		rectangular_check(char **map2d);
int		surronded_up_check(char **map2d);
int		surronded_left_check(char **map2d);
int		surronded_down_check(char **map2d);
int		surronded_right_check(char **map2d);
int		surrounded_check(char **map2d);
int		valid_path_p_way_one(char **map2d, int i, int j);
int		valid_path_p_way_one_exite(char **map2d, int i, int j);
int		valid_path_p_way(char **map2d);
int		valid_path_p_way_exite(char **map2d);
int		valid_path_e_c(char **map2d);
int		valid_path_e_c_exite(char **map2d);
int		valid_path_check(char **map2d);
int		valid_path_check_exite(char **map2d);
void	valid_path_water(char **map2d, int i, int j);
void	valid_path_water_exite(char **map2d, int i, int j);
int		map_check(char **map2d, char *map);
int		only_new_line(char *map2d);
char	*read_map(char *mapber);
char	**read_map2d(char *mapber);
void	display_map(char **map2d);
int		player_movements(int keyode, t_vars *vars);
int		update_display(void *vars_ptr);
void	display_map_one(char **map2d, int i, int j, t_vars vars);
void	player_movements_up(char **map2d, int i, int j, t_vars *vars);
void	player_movements_down(char **map2d, int i, int j, t_vars *vars);
void	player_movements_left(char **map2d, int i, int j, t_vars *vars);
void	player_movements_right(char **map2d, int i, int j, t_vars *vars);
void	open_dore(char **map2d);
void	win(char **map2d);
void	ft_free_all_one(char **str);
int		ft_lose_game(char **map2d, int i, int j);
char	*ft_itoa(int nb);
int		c_h(char **map2d);
int		c_w(char **map2d);
void	display_map_two(char **map2d, int i, int j, t_vars v);
void	update_display_two(t_vars *v, int i, int j);
int		components_check_bonus(char **map2d);
int		map_check_bonus(char	**map2d, char	*map);
int		move_enemy(char **map2d);
int		move_down(char **map2d, int i, int j, int p_j);
int		move_up(char **map2d, int i, int j, int p_j);
int		move_(char **map2d, int i, int j, int p_j);
void	game_over(void);
int		move_(char **map2d, int i, int j, int p_j);
void	ft_sswap(char *c1, char *c2);

#endif