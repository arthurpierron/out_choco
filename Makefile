##
## EPITECH PROJECT, 2024
## lib-include
## File description:
## Makefile
##

NAME = cat

CFLAGS = -fprofile-arcs -ftest-coverage -Wall

WARNING_FLAGS = -g -Wall

LDFLAGS = -lgcov

all: 	$(NAME)

$(NAME):
	@make -C lib/my all
	@cp ./lib/libmy.a .
	@gcc main2.c -L. -lmy -Wall $(WARNING_FLAGS) -I./include

tests_run: all
	@gcc -o unit_tests lib/my/*.c ./tests/test_my_printf.c -I./include \
	-L./lib/my -lmy --coverage -lcriterion
	@./unit_tests

clean:
	@rm -f *.o
	@rm -f lib/my/*.o
	@rm -f *.gcda
	@rm -f *.gcno
	@rm -f *~


fclean: clean
		@rm -f $(NAME)
		@rm -f *~
		@$(MAKE) -C lib/my fclean
		@rm -f libmy.a
		@rm -f unit_tests
		@rm -f a.out

re : fclean all

bin: 	fclean all
		@gcc main.c -L. -lmy -Wall $(WARNING_FLAGS)
		@./a.out
