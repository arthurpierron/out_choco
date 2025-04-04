/*
** EPITECH PROJECT, 2024
** t modifier
** File description:
** t modifier
*/

#include "my.h"

int modulo_ti(va_list args, int *check, int count)
{
    ptrdiff_t nb = va_arg(args, ptrdiff_t);

    count += my_nb_plength(nb);
    my_put_pnbr(nb);
    *check = 0;
    return count;
}

int modulo_td(va_list args, int *check, int count)
{
    ptrdiff_t nb = va_arg(args, ptrdiff_t);

    count += my_nb_plength(nb);
    my_put_pnbr(nb);
    *check = 0;
    return count;
}

int modulo_tu(va_list args, int *check, int count)
{
    ptrdiff_t nb = (unsigned)va_arg(args, ptrdiff_t);

    count += my_nb_plength(nb);
    if (nb > 0)
        my_put_pnbr(nb);
    *check = 0;
    return count;
}

static int loop_modulo_o(ptrdiff_t nb)
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
        my_put_pnbr(list[j]);
        count = count + 1;
    }
    return count;
}

int modulo_to(va_list args, int *check, int count)
{
    ptrdiff_t nb = (unsigned)va_arg(args, ptrdiff_t);

    if (nb <= 7) {
        my_put_pnbr(nb);
        count = count + 1;
    }
    if (nb >= 8) {
        count += loop_modulo_o(nb);
    }
    *check = 0;
    return count;
}
