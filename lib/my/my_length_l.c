/*
** EPITECH PROJECT, 2024
** modif
** File description:
** length
*/

#include "my.h"

static const modifierl_t format[] = {
    {'o', &modulo_lo},
    {'x', &modulo_lx},
    {'X', &modulo_big_lx},
    {'u', &modulo_lu},
    {'i', &modulo_li},
    {'d', &modulo_ld},
    {'0', NULL}
};

modifierl_t retrieve_modifierl(const char c)
{
    int k = 0;
    modifierl_t modifier;

    for (; format[k].identifier != '0'; k++) {
        modifier = format[k];
        if (modifier.identifier == c)
            return modifier;
    }
    return (modifierl_t) {'0', NULL};
}

int modulo_l(va_list args, const char *format, int *i, int *check)
{
    int count = 0;
    modifierl_t current_modifl;

    current_modifl = retrieve_modifierl(format[(*i) + 2]);
    if (current_modifl.identifier != '0')
        count = current_modifl.parse(args, check, count);
    if (current_modifl.identifier == '0') {
        if (format[(*i) + 3] == '%' || format[(*i) + 3] == ' ')
            my_putchar('%');
        my_putchar(format[(*i) + 2]);
        count = count + 2;
    }
    *check = 0;
    return count;
}
