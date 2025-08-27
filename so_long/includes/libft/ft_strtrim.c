/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:07:17 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/09 18:44:19 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isfromset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char *s, const char *set)
{
	int			start;
	int			end;
	char		*result;

	if (!s || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s) -1;
	while (s[start] && ft_isfromset(s[start], set))
		start++;
	while (s[start] && ft_isfromset(s[end], set) && start < end)
		end--;
	result = ft_substr(s, start, end - start +1);
	return (result);
}
