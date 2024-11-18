CC = gcc 
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCES = ft_printf.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $^

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re