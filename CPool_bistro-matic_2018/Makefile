##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SRC	=	./src/main_bistro.c 			\
		./src/infinadd/infin_add.c		\
		./src/infinadd/display_one.c		\
		./src/infinmult/conditions_mult.c	\
		./src/infindiv/conditions_div.c		\
		./src/infinmult/infin_mult.c		\
		./src/infindiv/infin_div.c		\
		./src/eval_expr.c			\
		./src/infinmod/conditions_mod.c		\
		./src/infinmod/infin_mod.c		\
		./src/infinadd/conditions.c

NAME	=	calc

all:	$(NAME)

$(NAME):
	cd lib/my && make && make clean
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
