##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## eval_expr Maurin LIBERAL Tristan MESUROLLE
##

SRC	=	main.c			\
		final_stumper.c		\
		check_rush.c		\
		dimention_checker.c

NAME	=	rush3

all:	$(NAME)

$(NAME):
	cd lib/my && make && make clean
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
