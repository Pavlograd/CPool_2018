##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## match_nmatch
##

SRC	=	my_putchar.c			\
		my_put_nbr.c			\
		my_swap.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_getnbr.c			\
		my_str_isalpha.c		\
		my_str_isnum.c			\
		my_len.c			\
		my_intlen.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
