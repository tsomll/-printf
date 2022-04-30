/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_undecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:26:34 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/05 14:26:36 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_undecimal(unsigned int n)
{
	char			src[11];
	int				i;
	int				kol;
	unsigned int	n1;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	n1 = n;
	i = 0;
	while (n1 > 0)
	{
		src[i++] = n1 % 10 + '0';
		n1 /= 10;
	}
	kol = i;
	while (i > 0)
		write(1, &src[i-- - 1], 1);
	return (kol);
}
