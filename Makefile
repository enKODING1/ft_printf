CC = gcc 
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCES = ft_printf.c get_char.c get_str.c get_addr.c get_int.c get_u.c get_x.c get_i.c\
	utils/ft_putnbr_base.c utils/ft_putnbr_addr_base.c utils/ft_putnbr_unsigned_base.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C ./libft
	make bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./include/

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
