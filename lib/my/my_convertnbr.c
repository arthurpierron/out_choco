/*
** EPITECH PROJECT, 2024
** my_convernbr
** File description:
** nbr
*/

#include "my.h"
#include <unistd.h>

static int put_negative(double nb)
{
    int count = 0;

    while (nb < 1) {
        nb *= 10;
        count++;
    }
    my_put_nbr(nb);
    my_putstr("e-");
    if (count <= 9)
        my_putchar('0');
    my_put_nbr(count);
    return 0;
}

static int precision(double nb, double *num, int *p, int *n)
{
    if (nb > 0 && nb < 1) {
        while (*num <= 1) {
            (*num) *= 10;
            (*p)++;
        }
    }
    if (nb >= 1 || nb <= 0) {
        while (*n > 0) {
            (*n) /= 10;
            (*p)++;
        }
    }
    return 0;
}

static int zeroandone(double num, double nb, int p)
{
    int count = 0;

    if (num >= 1 && nb >= 0.00001 && nb <= 999999) {
        my_putfloat(nb, p);
        return (my_nb_length(nb) + p + 1);
    }
    p = 6 - p;
    if (num >= 1 && nb <= 0.000001) {
        put_negative(nb);
        count += 5;
        return count;
    }
    my_putscientific(nb, 5);
    count += 11;
    return count;
}

static int gest_int_float(double nb, double m, double num, int p)
{
    int o = nb;
    int count = 0;

    m -= o;
    if ((m == 0 && nb <= 999999) || (o <= 999999 && p == 6)) {
        if (m >= 0.5)
            my_put_nbr(nb + 1);
            else {
                my_put_nbr(nb);
        }
        return my_nb_length(nb);
    }
    count += zeroandone(num, nb, p);
    return count;
}

int my_convertnbr(double nb, int *count)
{
    int n = nb;
    double num = nb;
    int p = 0;
    double m = nb;

    if (nb < 0) {
        nb = - nb;
        m = - m;
        n = nb;
        num = - num;
        *count = *count + 1;
        my_putchar('-');
    }
    precision(nb, &num, &p, &n);
    *count += gest_int_float(nb, m, num, p);
    return 0;
}
