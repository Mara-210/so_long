/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:38:36 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/02 15:54:33 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*int	main(void)
{
	char	*str1 = "Hola 42";
	char	*str2 = "Hola 21";
	int		result;

	result = ft_strncmp(str1, str2, 4);
	printf("Resultado comparando 4 caracteres: %d\n", result);
	result = ft_strncmp(str1, str2, 5);
	printf("Resultado comparando 5 caracteres: %d\n", result);
	result = ft_strncmp(str1, str2, 6);
	printf("Resultado comparando 6 caracteres: %d\n", result);
	return (0);
}*/
