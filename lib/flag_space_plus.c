/*
** EPITECH PROJECT, 2024
** printf
** File description:
** space_plus
*/

#include <stdarg.h>
#include "my.h"

int plus_end(const char *format, int i, int sign, va_list ap)
{
    if (format[i] == '+' && ap > 0) {
        my_putchar('+');
        sign = 1;
        i++;
        return 1;
    }
    if (sign != 1 && ap > 0)
        my_putchar(' ');
    return 0;
}

int space(const char *format, int i, va_list ap, int counter)
{
    int sign = 0;

    if (format[i] == '+' && ap > 0) {
        my_putchar('+');
        counter++;
        i++;
        sign = 1;
    }
    if (format[i] == ' ') {
        while (format[i] == ' ') {
            i++;
            counter++;
        }
        counter += plus_end(format, i, sign, ap);
    }
    return counter;
}
