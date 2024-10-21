/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:32:52 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 12:02:18 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_printf_string(va_list ft_args)
{
	char	*string_format;

	string_format = va_arg(ft_args, char *);
	return (ft_putstr(string_format));
}
