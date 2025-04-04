##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## MakeFile
##

DEFAULT := \e[0;
BOLD := \e[1;
END := \e[0m
RED := 91m
GREEN := 92m
YELLOW := 93m
BLUE := 94m


SRC     =	my_putfloat_count.c \
			my_convertnbr.c \
			my_putscientific_big_e.c \
			my_putscientific_count.c \
			my_putscientific.c \
			my_putfloat.c \
			modulos_1.c \
			modulos_2.c \
			modulos_3.c \
			modulos_4.c \
			my_length_l.c \
			my_l_modifier.c \
			my_l_modifier2.c \
			my_length_h.c \
			my_h_modifier.c \
			my_h_modifier2.c \
			my_length_z.c \
			my_z_modifier.c \
			my_z_modifier2.c \
			my_length_t.c \
			my_t_modifier.c \
			my_t_modifier2.c \
			my_put_nbr.c \
			my_put_unbr.c \
			my_put_lunbr.c \
			my_put_lnbr.c \
			my_put_snbr.c \
			my_put_sunbr.c \
			my_putstr.c \
			my_strlen.c \
			my_printf.c \
			my_putchar.c \
			my_nb_length.c \
			my_nb_llength.c \

OBJ := $(SRC:.c=.o)

WARNING_FLAGS := -Wextra -Wall -Werror -Wunused-parameter -W -g

NAME := libmy.a

all:    $(NAME)

$(NAME):
	gcc -c $(SRC) $(WARNING_FLAGS)
	@echo "[ $(BOLD)$(BLUE)OK$(END) ] $(DEFAULT)$(GREEN)$< compiled$(END)"
	ar rcs $(NAME) $(OBJ)
	@echo -n "[ $(BOLD)$(BLUE)OK$(END) ] "
	@echo "$(DEFAULT)$(GREEN)successfully created the $(NAME) library$(END)"
	cp $(NAME) ../
	@echo -n "[ $(BOLD)$(BLUE)OK$(END) ] "
	@echo "$(DEFAULT)$(GREEN)copied $(NAME) to ../$(END)"
	cp my.h ../../include/my.h
	@echo -n "[ $(BOLD)$(BLUE)OK$(END) ] "
	@echo "$(DEFAULT)$(GREEN)copied my.h to ./include/$(END)"

clean:
	rm -f $(OBJ)
	@echo -n "[ $(BOLD)$(BLUE)OK$(END) ] "
	@echo "$(DEFAULT)$(GREEN)clean *.o$(END)"


fclean:	clean
	rm -f $(NAME)
	@echo "[ $(BOLD)$(BLUE)OK$(END) ] $(DEFAULT)$(RED)removed $(NAME)$(END)"
	rm -f ../$(NAME)
	@echo "[ $(BOLD)$(BLUE)OK$(END) ] \
	$(DEFAULT)$(RED)removed $(NAME) in ../$(END)"

re:	fclean all
