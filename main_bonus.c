/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:38 by isbarka           #+#    #+#             */
/*   Updated: 2022/12/29 02:27:42 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_all_one(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

int	main(int ac, char **av)
{
	char	**map2d;
	char	*mapp;

	if (ac == 2)
	{
		map2d = read_map2d(av[1]);
		mapp = read_map(av[1]);
		if (map_check_bonus(map2d, mapp) == 0)
			exit(-1);
		display_map(read_map2d(av[1]));
	}
	else
		write(1, "error : arguments\n", 18);
}
