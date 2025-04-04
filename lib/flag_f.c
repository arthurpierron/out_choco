/*
** EPITECH PROJECT, 2024
** flag f
** File description:
** flag f
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

void rounded2(int pro, int sp, int actu)
{
    if (pro < 7)
        pro += 1;
    if (pro > 5)
        my_put_nbr(actu + 1);
    if (pro < 5)
        my_put_nbr(actu);
    if (pro == 5) {
        while (pro == 5) {
            sp = sp - pro;
            sp = sp * 10;
            pro = sp;
        }
        if (pro < 5)
            my_put_nbr(actu);
        if (pro > 5)
            my_put_nbr(actu + 1);
    }
}

void rounded(double sp, int preci)
{
    int end;
    int actu;
    int pro;

    for (int i = 0; i < preci + 1; i++) {
        if (i < preci - 1) {
            sp = sp * 10;
            my_put_nbr(sp);
            end = sp;
            sp = sp - end;
        }
        if (i == preci && preci != 0) {
            sp = sp * 10;
            actu = sp;
            sp = sp - actu;
            sp = sp * 10;
            pro = sp;
            rounded2(pro, sp, actu);
        }
    }
}

void my_putfloat(double nb, int preci, int fp, double sp)
{
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    fp = nb;
    sp = nb - fp;
    my_printf("%d", fp);
    if (preci != 0)
        my_putchar('.');
    rounded(sp, preci);
}

void flag_f(const char *format, int i, va_list ap)
{
    double d;
    int fp = 0;
    double sp = 0;
    int preci = 0;

    if (format[i] == 'f' || format[i] == 'F') {
        preci = my_preci(format, i);
        d = va_arg(ap, double);
        my_putfloat(d, preci, fp, sp);
    }
}
