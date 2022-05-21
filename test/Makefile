# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlorion <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 17:30:21 by nlorion           #+#    #+#              #
#    Updated: 2022/05/21 13:09:22 by nlorion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC	= ft_printf.c \
		ft_putnb.c \
		ft_uputnb.c \
		ft_printptr.c \
		ft_putstr.c \
		ft_lenvalue.c \
		ft_puthex.c \

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
