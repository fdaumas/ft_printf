/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_void_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:16:24 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 02:18:41 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_void_len(void *nbr, int index)
{
	unsigned long	tmp;
	char			*hexa;

	hexa = "0123456789abcdef";
	if (index == 0)
	{
		write(1, "0x", 2);
		index += 2;
		if ((unsigned long)nbr == 0)
		{
			write(1, &hexa[0], 1);
			index++;
		}
	}
	while (nbr > 0)
	{
		index++;
		tmp = (unsigned long)nbr / 16;
		index = ft_puthexa_void_len(((void *)tmp), index);
		write(1, &hexa[(unsigned long)nbr % 16], 1);
		break ;
	}
	return (index);
}
