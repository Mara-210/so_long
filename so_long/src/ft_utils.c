/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:00:41 by mramos-2          #+#    #+#             */
/*   Updated: 2025/08/27 13:12:18 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_ber(const char *file)
{
	const char	*dot;

	dot = ft_strrchr(file, '.');
	if (!dot || dot == file)
		return (0);
	if (ft_strncmp(dot, ".ber", 4) == 0)
		return (1);
	return (0);
}

void	ft_error(int i)
{
	if (i == 1)
		ft_printf("Error\n");
	else if (i == 2)
		ft_printf("Error\n");
	else if (i == 3)
		ft_printf("Error\n");
	else if (i == 4)
		ft_printf("Error\n");
	else if (i == 5)
		ft_printf("Error\n");
	else if (i == 6)
		ft_printf("Error. Map invalid\n");
	else if (i == 7)
		ft_printf("Error\n");
	exit(1);
}
