/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:20:49 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 13:43:53 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(unsigned int unb)
{
	unsigned int	digits[16];
	int				i;
	int				digit_count;

	i = 0;
	digit_count = 1;
	while (unb >= 10)
	{
		digits[i] = unb % 10;
		i++;
		unb /= 10;
		digit_count++;
	}
	digits[i] = unb;
	while (i >= 0)
	{
		ft_putchar(digits[i] + '0');
		i--;
	}
	return (digit_count);
}
