/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:26:14 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/05 14:26:16 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_minus(int n)
{
	int	m;
	int	n1;

	m = (n < 0);
	n1 = n;
	if (m)
		n1 *= (-1);
	return (n1);
}

int	ft_writenbr(int n)
{
	char		src[12];
	int			i;
	int			n1;
	int			kol;

	n1 = ft_minus(n);
	i = 0;
	while (n1 > 0)
	{
		src[i++] = n1 % 10 + '0';
		n1 /= 10;
	}
	if (n < 0)
		src[i++] = '-';
	kol = i;
	while (i > 0)
		write(1, &src[i-- - 1], 1);
	return (kol);
}

int	ft_putnbr(int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	return (ft_writenbr(n));
}
