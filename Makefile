##
## EPITECH PROJECT, 2024
## makefile
## File description:
## day10
##

SRC = lib/my_strlen.c \
      lib/my_putstr.c \
      lib/my_put_nbr.c \
      lib/my_putchar.c \
      my_printf.c \
      lib/flag_ouxx.c \
      lib/flag_disc.c \
      lib/flag_n.c \
      lib/my_getnbr.c \
      lib/preci.c \
      lib/flag_f.c \
      lib/flag_p.c \
      lib/flag_e.c \
      lib/flag_emaj.c \
      lib/flag_space_plus.c \
      lib/flag_lmaj.c \
      lib/long_e.c \
      lib/long_emaj.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all:    $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h lib/my.h

TESTS_FLAGS = --coverage -lcriterion

clean:
	rm -f *.o
	rm -f lib/*.o
	rm -f *.gcno
	rm -f *.gcda

fclean: clean
	rm -f libmy.a
	rm -f unit_tests

re:	fclean all

perso: $(OBJ)
	gcc -o $(NAME) $(OBJ)

unit_tests:	fclean
	gcc -o unit_tests my_printf.c lib/*.c tests/test_my_printf.c $(TESTS_FLAGS)

tests_run:	unit_tests
	./unit_tests
