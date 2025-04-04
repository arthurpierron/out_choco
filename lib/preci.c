/*
** EPITECH PROJECT, 2024
** precision
** File description:
** precision
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

char *retour(const char *format, int i, int count, char flag)
{
    char *str = malloc(sizeof(char) * count);
    int j = 0;

    while (format[i] != flag) {
        i++;
        if (format[i] >= '0' && format[i] <= '9') {
            str[j] = format[i];
            j++;
        }
    }
    if (str[0] == '\0')
        str[0] = '0';
    return str;
}

int my_preci(const char *format, int i)
{
    char *str = malloc(sizeof(char) + 1);
    int prec;
    char flag = format[i];
    int count = 0;

    str[0] = '\0';
    while (format[i] != '%') {
        i--;
        count += 1;
        if (format[i] == '.')
            str = retour(format, i, count, flag);
    }
    if (str[0] == '\0') {
        prec = 6;
        return prec;
    }
    prec = my_getnbr(str);
    return prec;
}
