##
## EPITECH PROJECT, 2024
## delivery
## File description:
## Makefile
##

CC = gcc
CFLAGS = -I./include -Wall -Wextra -Werror
TESTS_FLAGS = -lcriterion --coverage
SRC = src/add.c
OBJ = $(SRC:.c=.o)
NAME = my_lib
TEST_NAME = unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	ar rc lib$(NAME).a $(OBJ)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

unit_tests: fclean
	$(CC) -o $(TEST_NAME) $(SRC) tests/test_my.c $(CFLAGS) $(TESTS_FLAGS)

tests_run: unit_tests
	./$(TEST_NAME)

clean:
	rm -f $(OBJ)
	rm -f *.gc*

fclean: clean
	rm -f lib$(NAME).a
	rm -f $(TEST_NAME)

re: fclean all

.PHONY: all tests_run clean fclean re unit_tests