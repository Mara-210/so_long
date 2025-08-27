/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:09:25 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/15 22:22:20 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (!dest && !src)
	{
		return (NULL);
	}
	s = (char *) src;
	d = (char *) dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Mango";
	char	dest[10] = "";

	ft_memcpy(dest, src, 2);
	dest[2] = '\0';
	printf("Impresion: %s", dest);
	return (0);
}*/
