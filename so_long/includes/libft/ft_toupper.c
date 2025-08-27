/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:25:31 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/30 10:53:55 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*int main(void)
{
	char	letra = 'b';
	char	convertida = ft_toupper(letra);
	printf("Letra original: %c\n", letra);
	printf("Letra convertida: %c\n", convertida);
	return (0);
}*/