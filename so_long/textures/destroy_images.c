/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:50:25 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/25 13:52:26 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_images(t_game *game)
{
	if (game->player_texture)
		mlx_delete_texture(game->player_texture);
	if (game->exit_texture)
		mlx_delete_texture(game->exit_texture);
	if (game->collectible_texture)
		mlx_delete_texture(game->collectible_texture);
	if (game->wall_texture)
		mlx_delete_texture(game->wall_texture);
	if (game->floor_texture)
		mlx_delete_texture(game->floor_texture);
	if (game->player)
		mlx_delete_image(game->mlx, game->player);
	if (game->exit)
		mlx_delete_image(game->mlx, game->exit);
	if (game->collectible)
		mlx_delete_image(game->mlx, game->collectible);
	if (game->wall)
		mlx_delete_image(game->mlx, game->wall);
	if (game->floor)
		mlx_delete_image(game->mlx, game->floor);
	game->player = NULL;
	game->exit = NULL;
	game->collectible = NULL;
	game->wall = NULL;
	game->floor = NULL;
}
