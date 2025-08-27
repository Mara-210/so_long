/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:13:38 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:20:58 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	close_game(void *param)
{
	t_game	*game;
	int		i;

	if (!param)
		exit(0);
	game = (t_game *)param;
	destroy_images(game);
	if (game->map)
	{
		i = 0;
		while (i < game->map_height)
		{
			if (game->map[i])
				free(game->map[i]);
			i++;
		}
		free(game->map);
	}
	if (game->mlx)
		mlx_terminate(game->mlx);
	exit(0);
}

void	handle_keypress(mlx_key_data_t keydata, void *param)
{
	t_game	*game;

	if (keydata.action == MLX_PRESS)
	{
		game = (t_game *)param;
		if (keydata.key == KEY_W)
			move_up(game);
		else if (keydata.key == KEY_A)
			move_left(game);
		else if (keydata.key == KEY_S)
			move_down(game);
		else if (keydata.key == KEY_D)
			move_right(game);
		if (keydata.key == KEY_ESC)
			close_game(param);
	}
}

void	create_window(t_game *game)
{
	int	win_width;
	int	win_height;

	win_width = game->map_width * S;
	win_height = game->map_height * S;
	game->mlx = mlx_init(win_width, win_height, "so_long", true);
	if (!game->mlx)
		ft_error(5);
	mlx_key_hook(game->mlx, &handle_keypress, game);
	mlx_close_hook(game->mlx, &close_game, game);
}
