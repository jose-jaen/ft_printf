/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:14:24 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 13:43:46 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_base(unsigned int unb, char *base)
{
	int				i;
	int				digit_count;
	size_t			n_base;
	unsigned int	digits[16];

	i = 0;
	digit_count = 1;
	n_base = ft_strlen(base);
	while (unb >= n_base)
	{
		digits[i] = unb % n_base;
		i++;
		digit_count++;
		unb /= n_base;
	}
	digits[i] = unb;
	while (i >= 0)
	{
		ft_putchar(base[digits[i]]);
		i--;
	}
	return (digit_count);
}
