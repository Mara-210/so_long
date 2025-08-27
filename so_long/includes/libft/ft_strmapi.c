/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:42:48 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/12 11:12:38 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*result;

	result = malloc (ft_strlen(s) + 1);
	i = 0;
	if (!result)
		return (NULL);
	while (s && s[i])
	{
		result[i] = f (i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
