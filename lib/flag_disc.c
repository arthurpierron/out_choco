/*
** EPITECH PROJECT, 2024
** disc
** File description:
** disc
*/
#include "my.h"

void flag_d_i_s_c(const char *format, int i, va_list ap)
{
    int d;
    char c;
    char *s;

    if (format[i] == 'd' || format[i] == 'i') {
        d = va_arg(ap, int);
        my_put_nbr(d);
    }
    if (format[i] == 's') {
        s = va_arg(ap, char *);
        my_putstr(s);
    }
    if (format[i] == 'c') {
        c = (char) va_arg(ap, int);
        my_putchar(c);
    }
    if (format[i] == '%')
        my_putchar('%');
}
