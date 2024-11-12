SRC = ft_printf.c ft_putchar.c ft_put_signed_integer.c ft_putstr.c ft_puthexa.c ft_put_unsigned_integer.c ft_puthexaup.c ft_putaddress.c

OBJ = $(SRC:.c=.o)
# BOBJ = $(BNSRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

# bonus : $(BOBJ)
# 	ar rc $(NAME) $(BOBJ)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

# clean :
# 	rm -f $(OBJ) $(BOBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

ha : all clean