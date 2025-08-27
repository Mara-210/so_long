/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:43:39 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:33:38 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render(t_game *game, int j, int i)
{
	mlx_image_to_window(game->mlx, game->floor, S * i, S * j);
	if (game->map[j][i] == '1')
		mlx_image_to_window(game->mlx, game->wall, S * i, S * j);
	else if (game->map[j][i] == 'C')
		mlx_image_to_window(game->mlx, game->collectible, S * i, S * j);
	else if (game->map[j][i] == 'E')
	{
		mlx_image_to_window(game->mlx, game->exit, S * i, S * j);
		if (game->player_x == i && game->player_y == j)
			mlx_image_to_window(game->mlx, game->player, S * i, S * j);
	}
	else if (game->map[j][i] == 'P')
		mlx_image_to_window(game->mlx, game->player, S * i, S * j);
}

void	draw_sprites(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map_height)
	{
		j = 0;
		while (j < game->map_width)
		{
			render(game, i, j);
			j++;
		}
		i++;
	}
}
