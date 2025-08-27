/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:45:20 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/05 16:33:05 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "hola";
	char	b[] = "holi";
	char	c[] = "hola";

	int	r1 = ft_memcmp(a, b, 4);
	int	r2 = ft_memcmp(a, c, 4);
	int	r3 = ft_memcmp(b, a, 4);
	printf("Comparando a y b: %d\n", r1);
	printf("Comparando a y c: %d\n", r2);
	printf("Comparando b y a: %d\n", r3);
	return (0);
}*/