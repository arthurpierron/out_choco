/*
** EPITECH PROJECT, 2024
** modulo_4
** File description:
** modulo_4 my_printf
*/

#include "my.h"

static int convert_hexa(long int nb, int *count)
{
    char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int index_letter = 0;
    int k = 0;
    unsigned int list[32];

    while (nb != 0){
        list[k] = nb % 16;
        nb = nb / 16;
        k++;
    }
    for (int j = k - 1; j >= 0; j--) {
        if (list[j] <= 9)
            my_put_unbr(list[j]);
        if (list[j] >= 10) {
            index_letter = list[j] % 10;
            my_putchar(letter[index_letter]);
        }
        *count = *count + 1;
    }
    return nb;
}

int modulo_p(va_list args, int *check, int count)
{
    long int nb = (long int)va_arg(args, void *);

    my_putstr("0x");
    count = count + 2;
    convert_hexa(nb, &count);
    *check = 0;
    return count;
}

int modulo_n(va_list args, int *check, int count)
{
    int *nb = va_arg(args, int *);

    *nb = count;
    *check = 0;
    return count;
}
