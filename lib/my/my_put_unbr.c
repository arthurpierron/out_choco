/*
** EPITECH PROJECT, 2024
** u put nbr
** File description:
** my put nbr u
*/

#include "my.h"

int my_put_unbr(unsigned int nb)
{
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
