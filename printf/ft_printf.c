/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:25:56 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/05 14:25:57 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_istrue(char a)
{
	if (a == 'c' || a == 's' || a == '%' || a == 'd'
		|| a == 'p' || a == 'i' || a == 'u' || a == 'X' || a == 'x')
		return (1);
	else
		return (0);
}

int	ft_search(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	if (c == 'X')
		return (ft_upp16(va_arg(*ap, long long)));
	if (c == 'x')
		return (ft_lower16(va_arg(*ap, long long)));
	if (c == 'u')
		return (ft_undecimal(va_arg(*ap, unsigned long long)));
	if (c == '%')
		return (ft_percent());
	if (c == 'p')
		return (ft_pointer(va_arg(*ap, unsigned long long)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i++], 1);
			sum++;
		}
		else
		{
			if (ft_istrue(str[i + 1]))
			{
				sum += ft_search(str[i++ + 1], &ap);
			}
			i++;
		}
	}
	va_end(ap);
	return (sum);
}
