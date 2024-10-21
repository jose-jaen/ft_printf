/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulnb_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:20:39 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 12:54:27 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putulnb_base(size_t ulnb, char *base)
{
	size_t	digits[16];
	size_t	n_base;
	int		i;
	int		digit_count;

	i = 0;
	digit_count = 1;
	n_base = ft_strlen(base);
	while (ulnb >= n_base)
	{
		digits[i] = ulnb % n_base;
		i++;
		ulnb /= n_base;
		digit_count++;
	}
	digits[i] = ulnb;
	ft_putstr("0x");
	while (i >= 0)
	{
		ft_putchar(base[digits[i]]);
		i--;
	}
	return (digit_count + 2);
}
