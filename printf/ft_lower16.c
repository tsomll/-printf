/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:25:47 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/05 14:25:49 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_newlow(unsigned int n)
{
	int		i;
	int		sum;
	char	src[11];

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		if (((n % 16) >= 0) && ((n % 16) <= 9))
			src[i++] = n % 16 + '0';
		else
			src[i++] = n % 16 - 10 + 'a';
		n /= 16;
	}
	sum = i;
	while (i > 0)
		write(1, &src[i-- - 1], 1);
	return (sum);
}

int	ft_lower16(unsigned int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_newlow(n * (-1)) + 1);
	}
	return (ft_newlow(n));
}
