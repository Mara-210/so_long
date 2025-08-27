/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:40:13 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/28 12:21:48 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = 0;
	dstlen = 0;
	while (dstlen < size && dst[dstlen] != '\0')
	{
		dstlen++;
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (dstlen == size)
		return (size + srclen);
	while (src[i] != '\0' && dstlen + i < size -1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int	main(void)
{
	char	dest1[7] = "Hola, ";
	char	src1[] = "mundo!";
	size_t	result1;
	result1 = ft_strlcat(dest1, src1, 3);
	printf("Valor retornado: %zu\n", result1);
	printf("Longitud esperada: %zu\n\n", strlen("Hola, ") + strlen("mundo!"));
}*/