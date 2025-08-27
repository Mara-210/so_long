/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:34:55 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:34:11 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_textures(t_game *game)
{
	game->player_texture = mlx_load_png("assets/player.png");
	game->exit_texture = mlx_load_png("assets/exit.png");
	game->collectible_texture = mlx_load_png("assets/collectible.png");
	game->wall_texture = mlx_load_png("assets/wall.png");
	game->floor_texture = mlx_load_png("assets/floor.png");
	if (!game->player_texture || !game->exit_texture
		|| !game->collectible_texture || !game->wall_texture
		|| !game->floor_texture)
		ft_error(5);
}

void	create_images_from_textures(t_game *game)
{
	game->player = mlx_texture_to_image(game->mlx, game->player_texture);
	game->exit = mlx_texture_to_image(game->mlx, game->exit_texture);
	game->collectible = mlx_texture_to_image(game->mlx,
			game->collectible_texture);
	game->wall = mlx_texture_to_image(game->mlx, game->wall_texture);
	game->floor = mlx_texture_to_image(game->mlx, game->floor_texture);
	mlx_delete_texture(game->player_texture);
	game->player_texture = NULL;
	mlx_delete_texture(game->exit_texture);
	game->exit_texture = NULL;
	mlx_delete_texture(game->collectible_texture);
	game->collectible_texture = NULL;
	mlx_delete_texture(game->wall_texture);
	game->wall_texture = NULL;
	mlx_delete_texture(game->floor_texture);
	game->floor_texture = NULL;
	if (!game->player || !game->exit || !game->collectible
		|| !game->wall || !game->floor)
		ft_error(5);
}
