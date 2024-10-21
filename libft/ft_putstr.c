/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-de <jjaen-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:16:23 by jjaen-de          #+#    #+#             */
/*   Updated: 2024/10/12 13:07:22 by jjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int		n;
	char	*null;

	n = 0;
	null = "(nil)";
	if (str == NULL)
	{
		null = "(null)";
		while (null[n])
		{
			ft_putchar(null[n]);
			n++;
		}
		return (n);
	}
	while (str[n])
	{
		ft_putchar(str[n]);
		n++;
	}
	return (n);
}
