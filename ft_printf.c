/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:18:52 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 17:28:10 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_assign_type(char const c, va_list ft_args)
{
	int	res;

	res = 0;
	if (c == 'c' || c == '%')
		res = ft_printf_char(ft_args, c);
	else if (c == 's')
		res = ft_printf_string(ft_args);
	else if (c == 'p')
		res = ft_printf_pointer(ft_args);
	else if (c == 'd' || c == 'i')
		res = ft_printf_int(ft_args);
	else if (c == 'u')
		res = ft_printf_uint(ft_args);
	else
		res = ft_printf_hex(ft_args, c);
	return (res);
}

int	ft_traverse_format(va_list ft_args, char const *format)
{
	int	n;

	n = 0;
	while (*format)
	{
		if (*format == '%')
		{
			n += ft_assign_type(*(format + 1), ft_args);
			format += 2;
		}
		else
		{
			n++;
			ft_putchar(*format);
			format++;
		}
	}
	return (n);
}

int	ft_printf(char const *format, ...)
{
	int		res;
	va_list	ft_args;

	va_start(ft_args, format);
	res = ft_traverse_format(ft_args, format);
	va_end(ft_args);
	return (res);
}
