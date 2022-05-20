# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlorion <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 17:30:21 by nlorion           #+#    #+#              #
#    Updated: 2022/05/20 17:54:10 by nlorion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC	= ft_printf.c \
		srcs/ft_putnb.c \
		srcs/ft_strprint.c \
		srcs/ft_putchar.c \
		srcs/ft_uputnb.c \
		srcs/ft_printptr.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_puthex.c \

OBJ	= $(SRC:.c=.o)

COMPILER_COMMAND	= gcc

RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o	= $(COMPILER_COMMAND) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:	
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY : all clean fclean re
