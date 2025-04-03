##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##


CFLAGS += -I./include -Wall -Wextra

SRC = test.c \

OBJ = $(SRC:.c=.o)

NAME = choco

$(NAME):  $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
