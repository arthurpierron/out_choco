/*
** EPITECH PROJECT, 2024
** my_printf.c
** File description:
** my_printf.c
*/

#include "my.h"
#include <stdbool.h>

const formatter_t formats[] = {
    {'s', &modulo_s},
    {'%', &modulo_modulo},
    {'i', &modulo_i},
    {'d', &modulo_d},
    {'c', &modulo_c},
    {'u', &modulo_u},
    {'o', &modulo_o},
    {'x', &modulo_x},
    {'X', &modulo_big_x},
    {'p', &modulo_p},
    {'n', &modulo_n},
    {'f', &modulo_f},
    {'F', &modulo_f},
    {'e', &modulo_e},
    {'E', &modulo_big_e},
    {'g', &modulo_g},
    {'0', NULL}
};

static const modifer_t modif[] = {
    {'l', &modulo_l},
    {'h', &modulo_h},
    {'z', &modulo_z},
    {'t', &modulo_t},
    {'0', NULL}
};

formatter_t retrieve_format(const char c)
{
    int k = 0;
    formatter_t current_formatter;

    for (; formats[k].identifier != '0'; k++) {
        current_formatter = formats[k];
        if (current_formatter.identifier == c)
            return current_formatter;
    }
    return (formatter_t) {'0', NULL };
}

modifer_t retrieve_modifier(const char c)
{
    int k = 0;
    modifer_t modifier;

    for (; modif[k].modi_identifier != '0'; k++) {
        modifier = modif[k];
        if (modifier.modi_identifier == c)
            return modifier;
    }
    return (modifer_t) {'0', NULL};
}

static int gest_check(const char *format, int check, int i)
{
    int count = 0;

    if (check == 1) {
        my_putchar(format[i]);
        count = count + 1;
    }
    return count;
}

static int detect(const char *format, int *i, int count, va_list args)
{
    int check = 1;
    formatter_t current_formatter;
    modifer_t modifier;

    if (format[*i] == '%') {
        modifier = retrieve_modifier(format[(*i) + 1]);
        if (modifier.modi_identifier == '0')
            current_formatter = retrieve_format(format[(*i) + 1]);
        if (modifier.modi_identifier == '0' &&
            current_formatter.identifier != '0') {
            count = current_formatter.parse(args, &check, count);
            (*i)++;
        }
        if (modifier.modi_identifier != '0') {
            count += modifier.modi_parse(args, format, i, &check);
            (*i) = (*i) + 2;
        }
    }
    count += gest_check(format, check, *i);
    return count;
}

int my_printf(const char *format, ...)
{
    int count = 0;
    int i = 0;
    va_list args;

    va_start(args, format);
    for (; format[i] != 0; i++) {
        count = detect(format, &i, count, args);
    }
    va_end(args);
    return (count -1);
}
