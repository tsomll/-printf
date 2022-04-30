/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upp16.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:26:43 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/05 14:26:44 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	ft_newupp(unsigned int n)
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
			src[i++] = n % 16 - 10 + 'A';
		n /= 16;
	}
	sum = i;
	while (i > 0)
		write(1, &src[i-- - 1], 1);
	return (sum);
}

int	ft_upp16(unsigned int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_newupp(n * (-1)) + 1);
	}
	return (ft_newupp(n));
}
