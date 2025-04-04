/*
** EPITECH PROJECT, 2024
** printf
** File description:
** flag l maj
*/


#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

void roundedlong2(int pro, long double sp, int actu)
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

void roundedlong(long double sp, int preci)
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
            roundedlong2(pro, sp, actu);
        }
    }
}

void my_putfloatlong(long double nb, int preci, int fp, long double sp)
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
    roundedlong(sp, preci);
}

void flag_lmaje(const char *format, int i, va_list ap)
{
    long double d;
    int fp = 0;
    long double sp = 0;
    int preci = 0;

    if (format[i] == 'e') {
        preci = my_preci(format, i);
        d = va_arg(ap, long double);
        expo_long(d, preci, fp, sp);
        }
    if (format[i] == 'E') {
        preci = my_preci(format, i);
        d = va_arg(ap, long double);
        expo_emaj_long(d, preci, fp, sp);
    }
}

void flag_lmaj(const char *format, int i, va_list ap)
{
    long double d;
    int fp = 0;
    long double sp = 0;
    int preci = 0;

    if (format[i] == 'L') {
        i++;
        if (format[i] == 'f' || format[i] == 'F') {
            preci = my_preci(format, i);
            d = va_arg(ap, long double);
            my_putfloatlong(d, preci, fp, sp);
        }
        flag_lmaje(format, i, ap);
    }
}
