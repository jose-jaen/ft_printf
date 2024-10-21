/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:18:16 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 13:41:43 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_large(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (1);
	}
	return (0);
}

void	ft_turn_positive(int *nb, int *digit_count)
{
	if (*nb < 0)
	{
		ft_putchar('-');
		(*nb) *= -1;
		*digit_count += 1;
	}
}

int	ft_putnbr(int nb)
{
	int	i;
	int	digit_count;
	int	digits[10];

	if (ft_check_large(nb))
		return (11);
	i = 0;
	digit_count = 1;
	ft_turn_positive(&nb, &digit_count);
	while (nb >= 10)
	{
		digits[i] = nb % 10;
		i++;
		nb /= 10;
		digit_count++;
	}
	digits[i] = nb;
	while (i >= 0)
	{
		ft_putchar(digits[i] + '0');
		i--;
	}
	return (digit_count);
}
