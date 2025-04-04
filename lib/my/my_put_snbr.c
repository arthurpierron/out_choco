/*
** EPITECH PROJECT, 2024
** my_put_snbr.c
** File description:
** my_put_snbr.c
*/

#include "my.h"

int my_put_snbr(short int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10)
        my_put_snbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
