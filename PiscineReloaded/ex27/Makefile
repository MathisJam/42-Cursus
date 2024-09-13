TARGET		=	ft_display_file

CC	= cc
CFLAGS = -Wall -Wextra -Werror
SRC	=	ft_display_file.c
OBJECTS	=	$(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(CFLAGS) -o $@ $<

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
