/*
** EPITECH PROJECT, 2024
** nb_lenght
** File description:
** nb_lenght
*/

#include "my.h"

int my_nb_length(int nb)
{
    int length = 1;

    if (nb < 0) {
        nb = - nb;
        length++;
    }
    while (nb > 9) {
        nb = nb / 10;
        length++;
    }
    return length;
}

int my_nb_plength(ptrdiff_t nb)
{
    int length = 1;

    if (nb < 0) {
        nb = - nb;
        length++;
    }
    while (nb > 9) {
        nb = nb / 10;
        length++;
    }
    return length;
}
