/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:42 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/14 17:43:38 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j]
			&& big[i + j]
			&& (i + j) < len
			&& big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/*int	main _(void)
{
	const	char *texto = "Hola mundo de mierda";
	const	char *busqueda = "Hola mundo";

	char	*resultado = ft_strnstr(texto, busqueda, 12);

	if (resultado)
	printf("encontrado: %s\n", resultado);
	else
	printf("no se encontro la palabra\n");
	return(0);
}*/