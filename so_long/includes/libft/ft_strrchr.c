/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:25:52 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/30 14:24:26 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}

/*int	main(void)
{
	const char	*str = "Hola mundo mundo";
	int	ch = 'm';
	char	*result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("Ultima ocurrencia de '%c' encontrada en: \"%s\"\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);
	return (0);
}*/