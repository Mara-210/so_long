/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:57:26 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/08 10:24:04 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	n;

	n = ft_strlen(s1) + ft_strlen(s2)+1;
	s = malloc (n);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, n);
	ft_strlcat(s, s2, n);
	return (s);
}
