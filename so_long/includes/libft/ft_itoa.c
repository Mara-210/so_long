/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:05:30 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/12 10:42:03 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countdigits(int num)
{
	int	result;

	result = 0;
	if (num <= 0)
		result++;
	while (num != 0)
	{
		num = num / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*result;

	len = ft_countdigits(n);
	nb = n;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result [len--] = '\0';
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		result [0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
