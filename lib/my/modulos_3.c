/*
** EPITECH PROJECT, 2024
** specifiers my_printf
** File description:
** f, F, e, E
*/

#include "my.h"
#include <unistd.h>

int modulo_f(va_list args, int *check, int count)
{
    my_putfloat_count(va_arg(args, double), 6, &count);
    *check = 0;
    return count;
}

int modulo_e(va_list args, int *check, int count)
{
    my_putscientific_count(va_arg(args, double), 6, &count);
    *check = 0;
    return count;
}

int modulo_big_e(va_list args, int *check, int count)
{
    my_putscientific_big_e(va_arg(args, double), 6, &count);
    *check = 0;
    return count;
}

int modulo_g(va_list args, int *check, int count)
{
    my_convertnbr(va_arg(args, double), &count);
    *check = 0;
    return count;
}
