/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:36:15 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:26:16 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	size_map(const char *line, t_game *game)
{
	int	len;

	if (!line)
		return (0);
	len = ft_strlen(line);
	if (line[len - 1] == '\n')
		len--;
	if (game->map_width == 0)
		game->map_width = len;
	else if (game->map_width != len)
		return (0);
	return (1);
}

t_list	*read_line(int fd, t_game *game)
{
	char	*line;
	t_list	*list;

	list = NULL;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (!size_map(line, game))
		{
			free(line);
			ft_lstclear(&list, free);
			ft_error(0);
		}
		ft_lstadd_back(&list, ft_lstnew(line));
		game->map_height++;
	}
	return (list);
}

void	convert_list_to_array(t_list *list, t_game *game)
{
	int		i;
	t_list	*temp;

	game->map = ft_calloc(sizeof(char *), (game->map_height + 1));
	if (!game->map)
		ft_error(3);
	i = 0;
	temp = list;
	while (temp)
	{
		game->map[i] = ft_strtrim(temp->content, "\n");
		if (!game->map[i])
		{
			while (i >= 0)
				free(game->map[i--]);
			free(game->map);
			ft_error(3);
		}
		temp = temp->next;
		i++;
	}
}

void	read_map(t_game *game, const char *file)
{
	int		fd;
	t_list	*list;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error(1);
	list = read_line(fd, game);
	if (!list)
		ft_error(2);
	convert_list_to_array(list, game);
	ft_lstclear(&list, free);
}
