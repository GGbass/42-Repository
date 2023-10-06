# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gongarci <gongarci@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 10:23:11 by gongarci          #+#    #+#              #
#    Updated: 2023/09/26 10:23:15 by gongarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



FILES = ft_strchr.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_strlcpy.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \


OBJS = $(FILES:.c=.o)
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all 
