# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gongarci <gongarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 20:03:55 by gongarci          #+#    #+#              #
#    Updated: 2023/10/31 20:13:55 by gongarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c \
		ft_putchar.c \
		ft_string.c \
		ft_putnbr_fd.c \
		ft_unsigned_int.c \
		ft_puthexa.c \
		ft_putmem.c \

OBJS = $(FILES:.c=.o)
COMPILER = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all: $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re