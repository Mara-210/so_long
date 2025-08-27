/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:30:36 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/15 12:13:48 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if (!((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122)))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isalpha('Q'));
	printf("%d\n", ft_isalpha('4'));
	printf("%d\n", ft_isalpha(1));
	printf("%d\n", ft_isalpha('q'));
	printf("%d\n", ft_isalpha('2'));
	return (0);
}*/
