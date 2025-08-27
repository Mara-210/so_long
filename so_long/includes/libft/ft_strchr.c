/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:44:01 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/30 13:13:17 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Hola mundo";
	int	ch = 'm';
	char	*result = ft_strchr(str, ch);

	if (result)
		printf("Caracter encontrado: %s\n", result);
	else
		printf("Caracter no encontrado.\n");
	return (0);
}*/
