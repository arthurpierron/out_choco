/*
** EPITECH PROJECT, 2024
** length modifier z
** File description:
** lenngth modifier z
*/

#include "my.h"

static const modifierz_t format[] = {
    {'i', &modulo_zi},
    {'d', &modulo_zd},
    {'u', &modulo_zu},
    {'o', &modulo_zo},
    {'x', &modulo_zx},
    {'X', &modulo_big_zx},
    {'0', NULL}
};

modifierz_t retrieve_modifierlz(const char c)
{
    int k = 0;
    modifierz_t modifier;

    for (; format[k].identifier != '0'; k++) {
        modifier = format[k];
        if (modifier.identifier == c)
            return modifier;
    }
    return (modifierz_t) {'0', NULL};
}

int modulo_z(va_list args, const char *format, int *i, int *check)
{
    int count = 0;
    modifierz_t current_modifz;

    current_modifz = retrieve_modifierlz(format[(*i) + 2]);
    if (current_modifz.identifier != '0')
        count = current_modifz.parse(args, check, count);
    if (current_modifz.identifier == '0') {
        if (format[(*i) + 3] == '%' || format[(*i) + 3] == ' ')
            my_putchar('%');
        my_putchar(format[(*i) + 2]);
        count = count + 2;
    }
    *check = 0;
    return count;
}
