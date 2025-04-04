/*
** EPITECH PROJECT, 2024
** printf
** File description:
** flag p
*/

#include "my.h"

int conv_base_p(unsigned long int nb, int base)
{
    char *str = "0123456789abcdef";

    if (nb < base) {
        my_putchar(str[nb]);
    } else {
        conv_base_p(nb / base, base);
        my_putchar(str[nb % base]);
    }
}

void flag_p(const char *format, int i, va_list ap)
{
    void *ptr;

    if (format[i] == 'p') {
        ptr = va_arg(ap, void *);
        my_putstr("0x");
        conv_base_p((unsigned long int)ptr, 16);
    }
}
