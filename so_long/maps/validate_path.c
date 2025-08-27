/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:48:59 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:36:37 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**copy_map(t_game *game)
{
	int		i;
	char	**map_copy;

	map_copy = ft_calloc(sizeof(char *), (game->map_height + 1));
	if (!map_copy)
		ft_error(3);
	i = 0;
	while (i < game->map_height)
	{
		map_copy[i] = ft_strdup(game->map[i]);
		if (!map_copy[i])
		{
			i--;
			while (i >= 0)
			{
				free(map_copy[i]);
				i--;
			}
			free(map_copy);
			ft_error(3);
		}
		i++;
	}
	return (map_copy);
}

void	flood_fill(char **map, int x, int y, t_game *game)
{
	char	current;

	current = map[y][x];
	if (x < 0 || x >= game->map_width || y < 0 || y >= game->map_height)
		return ;
	if (map[y][x] == '1' || map[y][x] == 'V' || map[y][x] == 'E')
		return ;
	map[y][x] = 'V';
	flood_fill(map, x + 1, y, game);
	flood_fill(map, x - 1, y, game);
	flood_fill(map, x, y + 1, game);
	flood_fill(map, x, y - 1, game);
}

void	path_is_valid(char **map, t_game *game)
{
	int	i;
	int	j;

	j = 0;
	while (j < game->map_height)
	{
		i = 0;
		while (i < game->map_width)
		{
			if (map[j][i] == 'C')
				ft_error(6);
			i++;
		}
		j++;
	}
}

void	validate_path(t_game *game)
{
	char	**map_copy;
	int		i;

	i = 0;
	map_copy = copy_map(game);
	flood_fill(map_copy, game->player_x, game->player_y, game);
	path_is_valid(map_copy, game);
	while (i < game->map_height)
	{
		free(map_copy[i]);
		i++;
	}
	free(map_copy);
}
