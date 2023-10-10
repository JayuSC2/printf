NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
ft_putchar.c\
ft_putstr.c\
ft_putnbr.c\
ft_tolower.c\
ft_toupper.c\
ft_strlen.c\
ft_strchr.c\
ft_print_hexa.c

OBJ = $(SRC:.c =.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJS) $^

%.o: %.c
		$(CC) $(CFLAGS) -c -o $@ $<

clean:
		rm -f $(OBJ)

fclean: clean
				rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re