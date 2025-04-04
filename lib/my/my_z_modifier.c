/*
** EPITECH PROJECT, 2024
** z modifier
** File description:
** z modifier
*/

#include "my.h"

int modulo_zi(va_list args, int *check, int count)
{
    int nb = (int)va_arg(args, size_t);

    count += my_nb_length(nb);
    my_put_nbr(nb);
    *check = 0;
    return count;
}

int modulo_zd(va_list args, int *check, int count)
{
    int nb = (int)va_arg(args, size_t);

    count += my_nb_length(nb);
    my_put_nbr(nb);
    *check = 0;
    return count;
}

int modulo_zu(va_list args, int *check, int count)
{
    unsigned int nb = (unsigned int)va_arg(args, size_t);

    count += my_nb_length(nb);
    if (nb > 0)
        my_put_unbr(nb);
    *check = 0;
    return count;
}

static int loop_modulo_o(unsigned int nb)
{
    unsigned int list[32];
    int count = 0;
    int k = 0;

    while (nb != 0) {
        list[k] = nb % 8;
        nb = nb / 8;
        k++;
    }
    for (int j = k - 1; j >= 0; j--) {
        my_put_unbr(list[j]);
        count = count + 1;
    }
    return count;
}

int modulo_zo(va_list args, int *check, int count)
{
    unsigned int nb = (unsigned int)va_arg(args, size_t);

    if (nb <= 7) {
        my_put_unbr(nb);
        count = count + 1;
    }
    if (nb >= 8) {
        count += loop_modulo_o(nb);
    }
    *check = 0;
    return count;
}
