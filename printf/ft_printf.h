/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:35:35 by vvioleta          #+#    #+#             */
/*   Updated: 2021/11/06 16:35:38 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int	ft_lower16(unsigned int n);
int	ft_upp16(unsigned int n);
int	ft_undecimal(unsigned int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_percent(void);
int	ft_pointer(unsigned long long n);
int	ft_printf(const char *str, ...);
#endif
