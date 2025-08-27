/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:56:15 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:22:42 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	catch_collectible(t_game *game, int x, int y)
{
	if (game->map[y][x] == 'C')
	{
		game->collect--;
		game->map[y][x] = '0';
	}
}

int	exit_game(t_game *game)
{
	if (game->collect == 0)
	{
		close_game(game);
		return (1);
	}
	return (0);
}

void	update_position(t_game *game, int new_x, int new_y)
{
	if (game->map[game->player_y][game->player_x] == 'P')
		game->map[game->player_y][game->player_x] = '0';
	game->player_x = new_x;
	game->player_y = new_y;
	if (game->map[new_y][new_x] != 'E')
		game->map[new_y][new_x] = 'P';
}

void	refresh_window(t_game *game)
{
	printf("Moves: %d\n", game->moves);
	destroy_images(game);
	load_textures(game);
	create_images_from_textures(game);
	draw_sprites(game);
}

void	move(t_game *game, int dx, int dy)
{
	int	new_x;
	int	new_y;
	int	new_cell;

	new_x = game->player_x + dx;
	new_y = game->player_y + dy;
	new_cell = game->map[new_y][new_x];
	if (new_cell == '1')
		return ;
	else if (new_cell == 'E')
	{
		if (game->collect == 0)
		{
			exit_game(game);
			return ;
		}
		return ;
	}
	else if (new_cell == 'C')
		catch_collectible(game, new_x, new_y);
	update_position(game, new_x, new_y);
	game->moves++;
	refresh_window(game);
}
