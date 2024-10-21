/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:37:43 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 12:21:44 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_printf_pointer(va_list ft_args)
{
	char	*base;
	size_t	pointer_format;

	pointer_format = va_arg(ft_args, size_t);
	if (!pointer_format)
		return (ft_putstr("(nil)"));
	base = "0123456789abcdef";
	return (ft_putulnb_base(pointer_format, base));
}
