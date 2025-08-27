/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:56:07 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/05 17:05:54 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Hola mundo";
	char	*res1 = ft_memchr(str, 'm', 10);
	char	*res2 = ft_memchr(str, 'z', 10);

	if (res1)
		printf("Encontrado 'm':%s\n", res1);
	else
		printf("No se encontró 'm'\n");
	if (res2)
		printf("Encontrado 'z':%s\n", res2);
	else
		printf("No se encontró 'z'\n");
	return (0);
}*/
