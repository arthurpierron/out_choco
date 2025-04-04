/*
** EPITECH PROJECT, 2024
** condition
** File description:
** char
*/

#include "my.h"

int modulo_s(va_list args, int *check, int count)
{
    char *str = va_arg(args, char *);

    count += my_strlen(str);
    my_putstr(str);
    *check = 0;
    return count;
}

int modulo_modulo(va_list args, int *check, int count)
{
    (void)(args);
    my_putchar('%');
    count = count + 1;
    *check = 0;
    return count;
}

int modulo_i(va_list args, int *check, int count)
{
    int nb = va_arg(args, int);

    count += my_nb_length(nb);
    my_put_nbr(nb);
    *check = 0;
    return count;
}

int modulo_d(va_list args, int *check, int count)
{
    int nb = va_arg(args, int);

    count += my_nb_length(nb);
    my_put_nbr(nb);
    *check = 0;
    return count;
}

int modulo_c(va_list args, int *check, int count)
{
    my_putchar(va_arg(args, int));
    count = count + 1;
    *check = 0;
    return count;
}
