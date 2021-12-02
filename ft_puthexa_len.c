/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:23:14 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 00:39:13 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_len(unsigned int nbr, int upper, int index)
{
	char			*hexa_lo;
	char			*hexa_up;

	hexa_lo = "0123456789abcdef";
	hexa_up = "0123456789ABCDEF";
	if (index == 0 && nbr == 0)
	{
		if (upper == 1)
			write(1, &hexa_up[0], 1);
		else
			write(1, &hexa_lo[0], 1);
		index++;
	}
	while (nbr > 0)
	{
		index++;
		index = ft_puthexa_len(nbr / 16, upper, index);
		if (upper == 1)
			write(1, &hexa_up[nbr % 16], 1);
		else
			write(1, &hexa_lo[nbr % 16], 1);
		break ;
	}
	return (index);
}
