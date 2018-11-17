##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## rush2 Arthur Callens Maurin Liberal
##

SRC	=	main.c

NAME	=	cat

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
