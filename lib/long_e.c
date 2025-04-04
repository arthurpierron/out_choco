/*
** EPITECH PROJECT, 2024
** flag l long e
** File description:
** printf
*/

#include <stdarg.h>
#include "my.h"

void pui_long(int count, long double nb, int temp)
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

void my_putfloat_elong(long double nb, int preci, int fp, long double sp)
{
    fp = nb;
    sp = nb - fp;
    my_printf("%d", fp);
    if (preci != 0)
        my_putchar('.');
    roundedlong(sp, preci);
}

void expo_long(long double nb, int preci, int fp, long double sp)
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
    my_putfloat_elong(nb, preci, fp, sp);
    pui_long(count, nb, temp);
}
