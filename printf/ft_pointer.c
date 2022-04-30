/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:35:47 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/06 16:35:49 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_new(unsigned long long n)
{
	int		i;
	int		sum;
	char	src[21];

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (3);
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
	return (sum + 2);
}

int	ft_pointer(unsigned long long n)
{
	write(1, "0x", 2);
	return (ft_new(n));
}
