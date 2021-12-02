/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:17:09 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 00:39:27 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	split(int n, int index)
{
	char	c;

	if (n > 9)
	{
		index = split(n / 10, index);
	}
	c = (n % 10) + '0';
	index++;
	write(1, &c, 1);
	return (index);
}

static int	inverse(int n)
{
	int	index;

	index = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		index++;
	}
	return (split(n, index));
}

int	ft_putnbr_len(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
		return (inverse(n));
}
