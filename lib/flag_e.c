/*
** EPITECH PROJECT, 2024
** printf
** File description:
** flag e
*/

#include <stdarg.h>
#include "my.h"

void pui(int count, double nb, int temp)
{
    if (temp == 0)
        for (int i = 0; i < count; i++)
            nb = nb / 10;
    if (temp != 0)
        for (int i = 0; i < count; i++)
            nb *= 10;
    my_putchar('e');
    if (nb >= 1)
        my_putchar('+');
    if (nb >= 0 && nb < 1)
        my_putchar('-');
    if (count < 10)
        my_putchar('0');
    my_put_nbr(count);
}

void my_putfloat_e(double nb, int preci, int fp, double sp)
{
    fp = nb;
    sp = nb - fp;
    my_printf("%d", fp);
    if (preci != 0)
        my_putchar('.');
    rounded(sp, preci);
}

void expo(double nb, int preci, int fp, double sp)
{
    int count = 0;
    int temp = nb;

    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    if (nb >= 0 && nb < 1)
        while (nb < 1) {
            nb = nb * 10;
            count++;
        }
    if (nb >= 1)
        while (nb >= 10) {
            nb = nb / 10;
            count++;
        }
    my_putfloat_e(nb, preci, fp, sp);
    pui(count, nb, temp);
}

void flag_e(const char *format, int i, va_list ap)
{
    double d;
    int fp = 0;
    double sp = 0;
    int preci = 0;

    if (format[i] == 'e') {
        preci = my_preci(format, i);
        d = va_arg(ap, double);
        expo(d, preci, fp, sp);
    }
}
