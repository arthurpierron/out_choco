/*
** EPITECH PROJECT, 2024
** my_putscientific
** File description:
** double
*/


#include "my.h"

static int put_negative(double nb, int p, int *count)
{
    int len = 0;

    if (nb < 0) {
        nb = - nb;
        my_putchar('-');
        *count += 1;
    }
    while (nb <= 1) {
        nb *= 10;
        len++;
    }
    my_putfloat(nb, p);
    my_putstr("E-");
    *count += 12;
    if (len <= 9)
        my_putchar('0');
    my_put_nbr(len);
    return *count;
}

static int put_positive(double nb, int p, int *count)
{
    int len = 0;

    if (nb < 0) {
        nb = - nb;
        my_putchar('-');
        *count += 1;
    }
    while (nb > 10) {
        nb /= 10;
        len++;
    }
    my_putfloat(nb, p);
    my_putstr("E+");
    *count += 12;
    if (len <= 9)
        my_putchar('0');
    my_put_nbr(len);
    return *count;
}

int my_putscientific_big_e(double nb, int p, int *count)
{
    if ((nb <= 0 && nb <= -1) || nb >= 1)
        put_positive(nb, p, count);
    if ((nb > 0 && nb < 1) || (nb < 0 && nb > -1))
        put_negative(nb, p, count);
    return 0;
}
