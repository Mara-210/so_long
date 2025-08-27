/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:09:58 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:07:02 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2 || !check_ber(argv[1]))
		ft_error(1);
	ft_bzero(&game, sizeof(t_game));
	read_map(&game, argv[1]);
	validate_walls(&game);
	validate_components(&game);
	validate_path(&game);
	create_window(&game);
	load_textures(&game);
	create_images_from_textures(&game);
	draw_sprites(&game);
	mlx_loop(game.mlx);
	return (0);
}
