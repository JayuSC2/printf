NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putnbr_fd.c\
ft_tolower.c\
ft_toupper.c

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