/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:44:20 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/26 12:41:43 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 15
# endif

char	*get_next_line(int fd);
void	*gl_calloc(unsigned long count, unsigned long size);
const char	*gl_strchr(const char *s, int c);
char	*gl_strjoin(const char *s1, const char *s2);
char	*gl_substr(const char *s, unsigned int start, size_t len);
size_t	gl_strlen(const char *s);

#endif