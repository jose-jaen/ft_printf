/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:27:54 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 13:10:29 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_printf_int(va_list ft_args)
{
	int	int_format;

	int_format = va_arg(ft_args, int);
	return (ft_putnbr(int_format));
}
