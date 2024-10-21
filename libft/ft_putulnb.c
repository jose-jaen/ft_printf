/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:25:39 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 12:28:29 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putulnb(size_t ulnb)
{
	int		i;
	int		digit_count;
	size_t	digits[16];

	i = 0;
	digit_count = 1;
	while (ulnb >= 10)
	{
		digits[i] = ulnb % 10;
		i++;
		ulnb /= 10;
		digit_count++;
	}
	digit_count++;
	digits[i] = ulnb;
	while (i >= 0)
	{
		ft_putchar(digits[i] + '0');
		i--;
	}
	return (digit_count);
}
