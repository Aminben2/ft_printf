SRC = ft_printf

OBJ = $(SRC:.c=.o)
# BOBJ = $(BNSRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = r libftprintf.a

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