/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:32:38 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/23 18:42:23 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main()
{
	char str[11] = "Hola Mundo";

	printf("Antes: %s\n", str);
	ft_bzero(str, 4);
	printf("Despues: %s\n", str);
	return (0);
}*/
