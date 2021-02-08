##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC_MAIN			=	src/main.c

SRC_TEST			=	src/my_strlen.c

SRC					=	$(SRC_MAIN) $(SRC_TEST)

TESTS				=	tests/test_my_strlen.c		\
						tests/test_write.c

CFLAGS				=	-Wall -Wextra

CPPFLAGS			=	-I./include/

OBJ					=	$(SRC:.c=.o)

NAME				=	count_my_words

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

tests_run:
	@find -name "*.gc*" -delete
	$(CC) -o unit_tests $(SRC_TEST) $(TESTS) $(CFLAGS) $(CPPFLAGS) -lcriterion --coverage
	-./unit_tests --verbose
	$(RM) unit_tests
	mkdir -p coverage
	mv *.gc* coverage/

clean:
	$(RM) $(OBJ)
	$(RM) unit_tests *.gc*

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all tests_run clean fclean re
