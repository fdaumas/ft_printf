/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:41:55 by fdaumas           #+#    #+#             */
/*   Updated: 2021/11/26 01:56:54 by fdaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar_len(unsigned int nbr);
int	ft_puthexa_len(unsigned int nbr, int upper, int index);
int	ft_puthexa_void_len(void *nbr, int index);
int	ft_putnbr_len(int n);
int	ft_putnbr_ui_len(unsigned int n, int index);
int	ft_putpercent(void);
int	ft_putstr_len(char *s);
int	ft_printf(const char *fmt, ...);

#endif
