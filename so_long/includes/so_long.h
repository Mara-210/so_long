/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:52:24 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:38:06 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "MLX42/MLX42.h"
# include "libft/libft.h"
# include "printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define S 60
# define KEY_W MLX_KEY_W
# define KEY_A MLX_KEY_A  
# define KEY_S MLX_KEY_S
# define KEY_D MLX_KEY_D
# define KEY_ESC MLX_KEY_ESCAPE

typedef struct s_game
{
	int				moves;
	int				player_x;
	int				player_y;
	int				collect;
	int				map_width;
	int				map_height;
	char			**map;
	mlx_t			*mlx;
	mlx_image_t		*win;
	mlx_image_t		*player;
	mlx_image_t		*exit;
	mlx_image_t		*collectible;
	mlx_image_t		*wall;
	mlx_image_t		*floor;
	mlx_texture_t	*player_texture;
	mlx_texture_t	*exit_texture;
	mlx_texture_t	*collectible_texture;
	mlx_texture_t	*wall_texture;
	mlx_texture_t	*floor_texture;
}	t_game;

char	**copy_map(t_game *game);
t_list	*read_line(int fd, t_game *game);
int		size_map(const char *line, t_game *game);
void	convert_list_to_array(t_list *list, t_game *game);
void	read_map(t_game *game, const char *file);
void	validate_walls(t_game *game);
void	count_components(t_game *game, int *c, int *e, int *p);
void	validate_components(t_game *game);
void	flood_fill(char **map, int x, int y, t_game *game);
void	path_is_valid(char **map, t_game *game);
void	validate_path(t_game *game);
int		check_ber(const char *file);
void	handle_keypress(mlx_key_data_t keydata, void *param);
void	create_window(t_game *game);
void	ft_error(int i);
void	draw_sprites(t_game *game);
void	move_up(t_game *game);
void	move_down(t_game *game);
void	move_left(t_game *game);
void	move_right(t_game *game);
void	catch_collectible(t_game *game, int x, int y);
int		exit_game(t_game *game);
void	update_position(t_game *game, int new_x, int new_y);
void	refresh_window(t_game *game);
void	move(t_game *game, int dx, int dy);
void	destroy_images(t_game *game);
void	create_images_from_textures(t_game *game);
void	load_textures(t_game *game);
void	close_game(void *param);
#endif