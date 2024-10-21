/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:16:12 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 13:43:35 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_printf_uint(va_list ft_args)
{
	unsigned int	uint_format;

	uint_format = va_arg(ft_args, unsigned int);
	return (ft_putunbr(uint_format));
}
