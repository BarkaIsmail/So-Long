NAME = so_long

SRC = 	components_check.c\
		open_dore.c\
		surronded_check.c\
		ft_split.c\
		get_next_line.c\
		surronded_down_check.c\
		valid_path_p_way.c\
		display_map.c\
		player_movements.c\
		valid_path_check.c\
		ft_strdup.c\
		get_next_line_utils.c\
		surronded_left_check.c\
		valid_path_p_way_exite.c\
		map_check.c\
		read_map.c\
		valid_path_check_exite.c\
		ft_strjoin.c\
		rectangular_check.c\
		main.c\
		surronded_right_check.c\
		only_new_line.c\
		ft_memcpy.c\
		ft_strlen.c\
		player_movements_derections.c\
		surronded_up_check.c\
		lose_game.c\
		ft_itoa.c\
		display_map_one.c\


BSRC =	components_check_bonus.c\
		map_check_bonus.c\
		main_bonus.c\
		open_dore.c\
		surronded_check.c\
		ft_split.c\
		get_next_line.c\
		surronded_down_check.c\
		valid_path_p_way.c\
		display_map_bonus.c\
		player_movements.c\
		valid_path_check.c\
		ft_strdup.c\
		get_next_line_utils.c\
		surronded_left_check.c\
		valid_path_p_way_exite.c\
		read_map.c\
		valid_path_check_exite.c\
		ft_strjoin.c\
		surronded_right_check.c\
		only_new_line.c\
		rectangular_check.c\
		ft_memcpy.c\
		ft_strlen.c\
		player_movements_derections.c\
		surronded_up_check.c\
		lose_game.c\
		ft_itoa.c\
		display_map_one.c\
		enemy_movements.c\
		enemy_movements_one.c\
		enemy_movements_two.c\


OBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
MLX_FALGS = -lmlx -framework OpenGL -framework AppKit

all : $(NAME)

$(NAME): $(OBJS) so_long.h
	cc $(CFLAGS) $(MLX_FALGS) $(SRC) -o $(NAME)

bonus : so_long.h
	cc $(CFLAGS) $(MLX_FALGS) $(BSRC) -o $(NAME)

%.o: %.c so_long.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all