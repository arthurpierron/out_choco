/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** printf
*/
#include <stddef.h>
#include <stdarg.h>
#include "my.h"

void fonc_preci(const char *format, int i, va_list ap)
{
    flag_f(format, i, ap);
    flag_e(format, i, ap);
    flag_emaj(format, i, ap);
}

int flag2(const char *format, int i, va_list ap)
{
    if (format[i] == 'L') {
        flag_lmaj(format, i, ap);
        return 1;
    }
    flag_d_i_s_c(format, i, ap);
    flag_o_u_x_x(format, i, ap);
    flag_n(format, i, ap);
    flag_f(format, i, ap);
    flag_p(format, i, ap);
    flag_e(format, i, ap);
    flag_emaj(format, i, ap);
    return 0;
}

int flag(const char *format, int i, va_list ap)
{
    int counter = 0;
    int counter2 = 0;

    counter += space(format, i, ap, counter);
    i += counter;
    counter2 += flag2(format, i, ap);
    i += counter2;
    counter += counter2;
    if (format[i] == '.') {
        i++;
        counter++;
        while (format[i] <= '9' && format[i] >= '0') {
            counter++;
            i++;
        }
        fonc_preci(format, i, ap);
    }
    return counter;
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, format);
    for (; i < my_strlen(format); i++) {
        if (format[i] == '%') {
            i++;
            i += flag(format, i, ap);
        } else
            my_putchar(format[i]);
    }
    va_end(ap);
    return 0;
}
