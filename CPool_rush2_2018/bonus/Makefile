##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## rush2 Arthur Callens Maurin Liberal
##

SRC	=	rush2.c	\
		main.c

NAME	=	rush2

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -L./lib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
