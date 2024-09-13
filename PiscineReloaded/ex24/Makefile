NAME	=	libft.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

SRC		=		srcs/
SOURCES	=		$(SRC)ft_putchar.c $(SRC)ft_swap.c \
				$(SRC)ft_putstr.c $(SRC)ft_strlen.c $(SRC)ft_strcmp.c
OBJECTS	=		$(SOURCES:.c=.o)
INCDIR	=		includes/
HEADER	=		$(INCDIR)ft.h

all:	$(NAME)

$(NAME):	$(OBJECTS)
		ar rcs	$(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
