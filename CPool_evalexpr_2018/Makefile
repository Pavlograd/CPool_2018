##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## eval_expr Maurin LIBERAL Tristan MESUROLLE
##

SRC	=	main.c		\
		eval_expr.c

NAME	=	eval_expr

all:	$(NAME)

$(NAME):
	cd lib/my && make && make clean
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
