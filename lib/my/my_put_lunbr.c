/*
** EPITECH PROJECT, 2024
** put nbr l
** File description:
** put nbr long
*/

#include "my.h"

int my_put_lunbr(unsigned long int nb)
{
    if (nb >= 10)
        my_put_lunbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
