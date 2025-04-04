/*
** EPITECH PROJECT, 2024
** put nbr l
** File description:
** put nbr long
*/

#include "my.h"

int my_put_sunbr(unsigned short int nb)
{
    if (nb >= 10)
        my_put_sunbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
