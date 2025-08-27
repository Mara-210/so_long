/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_components.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:21:08 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:26:53 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_walls(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map_width)
	{
		if (game->map[0][i] != '1')
			ft_error(4);
		i++;
	}
	i = 0;
	while (i < game->map_width)
	{
		if (game->map[game->map_height - 1][i] != '1')
			ft_error(4);
		i++;
	}
	j = 1;
	while (j < game->map_height - 1)
	{
		if (game->map[j][0] != '1' || game->map[j][game->map_width - 1] != '1')
			ft_error(4);
		j++;
	}
}

void	count_components(t_game *game, int *c, int *e, int *p)
{
	int	i;
	int	j;

	j = 0;
	while (j < game->map_height)
	{
		i = 0;
		while (i < game->map_width)
		{
			if (game->map[j][i] == 'P')
			{
				*p += 1;
				game->player_x = i;
				game->player_y = j;
			}
			else if (game->map[j][i] == 'C')
				*c += 1;
			else if (game->map[j][i] == 'E')
				*e += 1;
			else if (game->map[j][i] != '0' && game->map[j][i] != '1')
				ft_error(5);
			i++;
		}
		j++;
	}
}

void	validate_components(t_game *game)
{
	int	collectibles;
	int	exits;
	int	players;

	collectibles = 0;
	exits = 0;
	players = 0;
	count_components(game, &collectibles, &exits, &players);
	if (collectibles < 1 || exits != 1 || players != 1)
		ft_error(6);
	game->collect = collectibles;
}
