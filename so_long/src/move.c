/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:23:09 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:09:05 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *game)
{
	move(game, 0, -1);
}

void	move_down(t_game *game)
{
	move(game, 0, 1);
}

void	move_right(t_game *game)
{
	move(game, 1, 0);
}

void	move_left(t_game *game)
{
	move(game, -1, 0);
}
