/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:14:46 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 02:29:40 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_cspdiuxx(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

static int	ft_redirect(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar_len(va_arg(args, unsigned int)));
	else if (c == 's')
		return (ft_putstr_len(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_puthexa_void_len(va_arg(args, void *), 0));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_len(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_ui_len(va_arg(args, int), 0));
	else if (c == 'x')
		return (ft_puthexa_len(va_arg(args, unsigned int), 0, 0));
	else if (c == 'X')
		return (ft_puthexa_len(va_arg(args, unsigned int), 1, 0));
	else if (c == '%')
		return (ft_putpercent());
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		index_str;
	int		nbr_char;

	index_str = 0;
	nbr_char = 0;
	va_start(args, fmt);
	while (fmt[index_str] != '\0')
	{
		if (fmt[index_str] == '%')
		{
			index_str++;
			nbr_char += ft_redirect(args, fmt[index_str]);
			if (is_cspdiuxx(fmt[index_str]) == 1)
				index_str++;
		}
		else
		{
			write(1, &fmt[index_str], 1);
			nbr_char++;
			index_str++;
		}
	}
	va_end(args);
	return (nbr_char);
}
