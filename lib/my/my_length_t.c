/*
** EPITECH PROJECT, 2024
** length modifier t
** File description:
** lenngth modifier t
*/

#include "my.h"

static const modifiert_t format[] = {
    {'i', &modulo_ti},
    {'d', &modulo_td},
    {'u', &modulo_tu},
    {'o', &modulo_to},
    {'x', &modulo_tx},
    {'X', &modulo_big_tx},
    {'0', NULL}
};

modifiert_t retrieve_modifierlt(const char c)
{
    int k = 0;
    modifiert_t modifier;

    for (; format[k].identifier != '0'; k++) {
        modifier = format[k];
        if (modifier.identifier == c)
            return modifier;
    }
    return (modifiert_t) {'0', NULL};
}

int modulo_t(va_list args, const char *format, int *i, int *check)
{
    int count = 0;
    modifiert_t current_modift;

    current_modift = retrieve_modifierlt(format[(*i) + 2]);
    if (current_modift.identifier != '0')
        count = current_modift.parse(args, check, count);
    if (current_modift.identifier == '0') {
        if (format[(*i) + 3] == '%' || format[(*i) + 3] == ' ')
            my_putchar('%');
        my_putchar(format[(*i) + 2]);
        count = count + 2;
    }
    *check = 0;
    return count;
}
