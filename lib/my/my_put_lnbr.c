/*
** EPITECH PROJECT, 2024
** my_put_lnbr.c
** File description:
** my_put_lnbr.c
*/

#include "my.h"

int my_put_lnbr(long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10)
        my_put_lnbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
