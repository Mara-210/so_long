/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:44:17 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/22 14:19:42 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_line(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!stash || !stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = gl_substr(stash, 0, i);
	return (line);
}

static char	*ft_get_rest(char *stash)
{
	int		i;
	char	*rest;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	rest = gl_substr(stash, i + 1, gl_strlen(stash) - i - 1);
	free(stash);
	return (rest);
}

static char	*ft_read_and_stash(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes;
	char	*tmp;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(stash), NULL);
	bytes = 1;
	while (!gl_strchr(stash, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buffer[bytes] = '\0';
		tmp = gl_strjoin(stash, buffer);
		free(stash);
		stash = tmp;
		if (!stash)
			break ;
	}
	free(buffer);
	if (bytes < 0)
		return (free(stash), NULL);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = ft_read_and_stash(fd, stash);
	stash = tmp;
	if (!stash)
		return (NULL);
	line = ft_get_line(stash);
	stash = ft_get_rest(stash);
	return (line);
}

/*int	main (void)
{
	int		fd = open("texto.txt", O_RDONLY);
	char	*line;

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}*/
