/*
** EPITECH PROJECT, 2024
** h modifier
** File description:
** h modifier
*/

#include "my.h"

int modulo_hi(va_list args, int *check, int count)
{
    short int nb = (short int)va_arg(args, int);

    count += my_nb_length(nb);
    my_put_snbr(nb);
    *check = 0;
    return count;
}

int modulo_hd(va_list args, int *check, int count)
{
    short int nb = (short int)va_arg(args, int);

    count += my_nb_length(nb);
    my_put_snbr(nb);
    *check = 0;
    return count;
}

int modulo_hu(va_list args, int *check, int count)
{
    unsigned short int nb = (unsigned short int)va_arg(args, int);

    count += my_nb_length(nb);
    if (nb > 0)
        my_put_sunbr(nb);
    *check = 0;
    return count;
}

static int loop_modulo_o(unsigned short int nb)
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

int modulo_ho(va_list args, int *check, int count)
{
    unsigned short int nb = (unsigned short int)va_arg(args, int);

    if (nb <= 7) {
        my_put_sunbr(nb);
        count = count + 1;
    }
    if (nb >= 8) {
        count += loop_modulo_o(nb);
    }
    *check = 0;
    return count;
}
