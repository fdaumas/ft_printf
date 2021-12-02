# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdaumas <fdaumas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 22:22:53 by fdaumas           #+#    #+#              #
#    Updated: 2021/12/02 22:27:04 by fdaumas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		ft_putchar_len.c\
				ft_puthexa_len.c\
				ft_puthexa_void_len.c\
				ft_putnbr_len.c\
				ft_putnbr_ui_len.c\
				ft_putpercent.c\
				ft_putstr_len.c\
				ft_printf.c

OBJS		=	${SRCS:.c=.o}
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
HEADER		=	ft_printf.h
NAME		=	libftprintf.a

all :	${NAME}

$(NAME) :	${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus :		${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -I. -c $< -o $@

clean :
	rm -f ${OBJS}

fclean :	clean
	rm -f ${NAME}

re :		fclean all
