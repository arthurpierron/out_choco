/*
** EPITECH PROJECT, 2024
** modifier length h
** File description:
** length modif h
*/

#include "my.h"

static const modiferh_t format[] = {
    {'i', &modulo_hi},
    {'d', &modulo_hd},
    {'u', &modulo_hu},
    {'o', &modulo_ho},
    {'x', &modulo_hx},
    {'X', &modulo_big_hx},
    {'0', NULL}
};

modiferh_t retrieve_modifierh(const char c)
{
    int k = 0;
    modiferh_t modifier;

    for (; format[k].identifier != '0'; k++) {
        modifier = format[k];
        if (modifier.identifier == c)
            return modifier;
    }
    return (modiferh_t) {'0', NULL};
}

int modulo_h(va_list args, const char *format, int *i, int *check)
{
    int count = 0;
    modiferh_t current_modifh;

    current_modifh = retrieve_modifierh(format[(*i) + 2]);
    if (current_modifh.identifier != '0')
        count = current_modifh.parse(args, check, count);
    if (current_modifh.identifier == '0') {
        if (format[(*i) + 3] == '%' || format[(*i) + 3] == ' ')
            my_putchar('%');
        my_putchar(format[(*i) + 2]);
        count = count + 2;
    }
    *check = 0;
    return count;
}
