# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joellin <joellin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/17 10:54:37 by joellin           #+#    #+#              #
#    Updated: 2026/11/17 13:07:40 by joellin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = utils/push.c \
	utils/reverse_rotate.c \
	utils/rotate.c \
	utils/swap.c \
	utils/utils.c \

LIBFT = src/libft/libft.a

#PRINTF = src/ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I .

NAME = push_swap.a

test: $(NAME) $(LIBFT)
	$(CC) $(CFLAGS) ./algo/simple.c ./push_swap.a ./src/libft/libft.a && ./a.out

all: $(NAME)

$(LIBFT):
		$(MAKE) -C src/libft

#$(PRINTF):
#		$(MAKE) -C libftprintf

$(NAME): $(OBJS) $(LIBFT)
		ar rcs $(NAME) $(OBJS)

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