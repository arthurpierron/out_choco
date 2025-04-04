/*
** EPITECH PROJECT, 2024
** my_putscientific
** File description:
** double
*/


#include "my.h"

static int put_negative(double nb, int p)
{
    int len = 0;

    if (nb < 0) {
        nb = - nb;
        my_putchar('-');
    }
    while (nb < 1) {
        nb *= 10;
        len++;
    }
    my_putfloat(nb, p);
    my_putstr("e-");
    if (len <= 9)
        my_putchar('0');
    my_put_nbr(len);
    return 0;
}

static int put_positive(double nb, int p)
{
    int len = 0;

    if (nb < 0) {
        nb = - nb;
        my_putchar('-');
    }
    while (nb > 9) {
        nb /= 10;
        len++;
    }
    my_putfloat(nb, p);
    my_putstr("e+");
    if (len <= 9)
        my_putchar('0');
    my_put_nbr(len);
    return 0;
}

int my_putscientific(double nb, int p)
{
    if ((nb <= 0 && nb <= -1) || nb >= 1)
        put_positive(nb, p);
    if ((nb > 0 && nb < 1) || (nb < 0 && nb > -1))
        put_negative(nb, p);
    return 0;
}
