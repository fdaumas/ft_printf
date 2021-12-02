/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:50:11 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 01:47:33 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *s)
{
	int	index;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	index = 0;
	while (s[index] != '\0')
	{
		write(1, &s[index], 1);
		index++ ;
	}
	return (index);
}
