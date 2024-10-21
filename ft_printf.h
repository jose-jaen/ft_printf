/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:53:20 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/06 18:37:48 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf_char(va_list ft_args, char c);
int	ft_printf_int(va_list ft_args);
int	ft_printf_string(va_list ft_args);
int	ft_printf_uint(va_list ft_args);
int	ft_printf_pointer(va_list ft_args);
int	ft_printf_hex(va_list ft_args, char c);
int	ft_printf(const char *format, ...);

#endif
