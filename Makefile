##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPOOL MATCH NMATCH
##

SRC_TEST	=	*match.c tests/*.c

OBJ_TEST	= 	$(SRC_TEST:.c=.o)

NAME_TEST	=	match_nmatch_test

SRC	=	*.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	match_nmatch

LIB	=	-L. lib/my/libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME) $(LIB)

test:		$(OBJ_TEST)
	gcc $(SRC_TEST) -o $(NAME_TEST) $(LIB) --coverage -lcriterion

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_TEST)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

re: fclean all

cleantest: clean
	rm -f *.g*
