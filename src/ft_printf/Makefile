# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joellin <joellin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/29 21:03:24 by joellin           #+#    #+#              #
#    Updated: 2026/10/29 21:03:24 by joellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = src/ft_putchar_fd.c \
	src/ft_puthex_fd.c \
	src/ft_putnbr_fd.c \
	src/ft_putunsigned_fd.c \
	src/ft_putstr_fd.c \
	src/ft_putptr_fd.c \
	ft_printf.c


OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I .

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean : 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re