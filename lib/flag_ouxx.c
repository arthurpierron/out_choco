/*
** EPITECH PROJECT, 2024
** conv octa
** File description:
** conv octa
*/
#include "my.h"

int conv_base(unsigned int nb, int base)
{
    char *str = "0123456789abcdef";

    if (nb < base) {
        my_putchar(str[nb]);
    } else {
        conv_base(nb / base, base);
        my_putchar(str[nb % base]);
    }
}

int conv_basex(unsigned int nb, int base)
{
    char *str = "0123456789ABCDEF";

    if (nb < base) {
        my_putchar(str[nb]);
    } else {
        conv_basex(nb / base, base);
        my_putchar(str[nb % base]);
    }
}

void flag_o_u_x_x(const char *format, int i, va_list ap)
{
    unsigned int d;

    if (format[i] == 'o') {
        d = va_arg(ap, unsigned int);
        conv_base(d, 8);
    }
    if (format[i] == 'u') {
        d = va_arg(ap, unsigned int);
        conv_base(d, 10);
    }
    if (format[i] == 'x') {
        d = va_arg(ap, unsigned int);
        conv_base(d, 16);
    }
    if (format[i] == 'X') {
        d = va_arg(ap, unsigned int);
        conv_basex(d, 16);
    }
}
