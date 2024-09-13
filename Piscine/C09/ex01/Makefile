# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjameau <mjameau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 18:10:25 by mjameau           #+#    #+#              #
#    Updated: 2024/04/01 17:01:10 by mjameau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM		=	rm -f

INCDIR		=	includes

HEADER		=    $(includes)ft.h

SOURCES		=	srcs/ft_putchar.c	srcs/ft_swap.c	srcs/ft_putstr.c \
		srcs/ft_strlen.c	srcs/ft_strcmp.c

OBJECTS		=	$(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS)
	ar rc	$(NAME)	$(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
