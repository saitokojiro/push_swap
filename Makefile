# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joellin <joellin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/17 10:54:37 by joellin           #+#    #+#              #
#    Updated: 2026/11/24 21:35:05 by joellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c \
	utils/push.c \
	utils/reverse_rotate.c \
	utils/rotate.c \
	utils/swap.c \
	utils/utils.c \
	utils/stack.c \
	utils/sort_algo.c \
	utils/parsing.c \
	algo/simple.c \

LIBFT = src/libft/libft.a

#PRINTF = src/ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I .

NAME = push_swap

all: $(NAME)

$(LIBFT):
		$(MAKE) -C src/libft

#$(PRINTF):
#		$(MAKE) -C libftprintf



# $(NAME): $(OBJS) $(LIBFT)
# 		ar rcs $(NAME) $(OBJS)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT)  -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
		$(RM) $(OBJS)
		$(MAKE) -C src/libft clean
#$(MAKE) -C src/ft_printf clean

fclean: clean
		$(RM) $(NAME)
		$(MAKE) -C src/libft fclean
#		$(MAKE) -C src/ft_printf fclean

re: fclean all

.PHONY: all clean fclean re