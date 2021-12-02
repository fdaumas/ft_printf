/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ui_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:36:45 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 00:38:39 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ui_len(unsigned int n, int index)
{
	char	c;

	if (n > 9)
	{
		index = ft_putnbr_ui_len(n / 10, index);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	index++;
	return (index);
}
