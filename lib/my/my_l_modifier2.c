/*
** EPITECH PROJECT, 2024
** l_modifier2
** File description:
** lenght modifier 2
*/

#include "my.h"

int modulo_li(va_list args, int *check, int count)
{
    long int nb = va_arg(args, long int);

    count += my_nb_llength(nb);
    my_put_lnbr(nb);
    *check = 0;
    return count;
}

int modulo_ld(va_list args, int *check, int count)
{
    long int nb = va_arg(args, long int);

    count += my_nb_llength(nb);
    my_put_lnbr(nb);
    *check = 0;
    return count;
}
