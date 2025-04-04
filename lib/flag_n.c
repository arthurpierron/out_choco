/*
** EPITECH PROJECT, 2024
** flag n
** File description:
** %n
*/
#include <stdarg.h>

void flag_n(const char *format, int i, va_list ap)
{
    int *len;

    if (format[i] == 'n') {
        len = va_arg(ap, int *);
        *len = i - 1;
    }
}
