/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:31:26 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/15 12:30:17 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (!((c >= '0') && (c <= '9')))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	int c1 = '2';
	int c2 = 'a';
	int c3 = '4';
	printf("resultado: %i\n", ft_isdigit(c1));
	printf("resultado: %i\n", ft_isdigit(c2));
	printf("resultado: %i\n", ft_isdigit(c3));
	return (0);
}*/
