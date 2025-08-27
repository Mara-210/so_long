/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:12:07 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/25 16:42:15 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

/*int	main(void)
{
	char	dst[10];
	char	*src = "por lo que sea\0";
	size_t	len1;

	len1 = ft_strlcpy(dst, src, sizeof(dst));
	printf("Cadena destino: '%s' \n", dst);
	printf("Longitud retornada: %zu\n", len1);
	printf("Longitud original de src: %zu\n", strlen(src));
	printf("Tamaño del desino: %zu\n", sizeof(dst));
}*/
