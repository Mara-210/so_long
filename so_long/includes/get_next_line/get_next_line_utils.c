/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:44:12 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/22 14:21:47 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*gl_calloc(unsigned long count, unsigned long size)
{
	unsigned long	total;
	void			*ptr;
	unsigned long	i;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

const char	*gl_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}

char	*gl_strjoin(const char *s1, const char *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (gl_substr(s2, 0, gl_strlen(s2)));
	if (!s2)
		return (gl_substr(s1, 0, gl_strlen(s1)));
	s = gl_calloc(gl_strlen(s1) + gl_strlen(s2) + 1, 1);
	if (!s)
		return (NULL);
	i = -1;
	while (s1[++i])
		s[i] = s1[i];
	j = 0;
	while (s2[j])
		s[i++] = s2[j++];
	return (s);
}

char	*gl_substr(const char *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned long	i;

	if (!s)
		return (NULL);
	if (start >= gl_strlen(s))
		return (gl_calloc(1, sizeof(char)));
	if (len > gl_strlen(s + start))
		len = gl_strlen(s + start);
	result = gl_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}

size_t	gl_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
