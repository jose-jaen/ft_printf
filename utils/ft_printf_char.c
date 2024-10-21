/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:46 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/06 18:08:29 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_printf_char(va_list ft_args, char c)
{
	char	char_format;

	if (c == '%')
		char_format = '%';
	else
		char_format = va_arg(ft_args, int);
	ft_putchar(char_format);
	return (1);
}
