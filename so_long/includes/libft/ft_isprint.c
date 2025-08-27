/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:32:02 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/23 18:32:10 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint('\n'));
	return (0);
}*/
