/*
** EPITECH PROJECT, 2024
** specifiers printfs
** File description:
** o, u x, X
*/

#include "my.h"

static int loop_modulo_o(int nb)
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

int modulo_o(va_list args, int *check, int count)
{
    unsigned int nb = va_arg(args, unsigned int);

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

int modulo_u(va_list args, int *check, int count)
{
    unsigned int nb = va_arg(args, unsigned int);

    count += my_nb_length(nb);
    if (nb > 0)
        my_put_unbr(nb);
    *check = 0;
    return count;
}

static int gest_modulo_x(unsigned int *list, int j)
{
    char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int index_letter = 0;
    int count = 0;

    if (list[j] >= 10) {
        index_letter = list[j] % 10;
        my_putchar(letter[index_letter]);
        count = count + 1;
    }
    if (list[j] <= 9) {
        my_put_unbr(list[j]);
        count = count + 1;
    }
    return count;
}

int modulo_x(va_list args, int *check, int count)
{
    int k = 0;
    unsigned int nb = va_arg(args, unsigned int);
    unsigned int list[32];

    while (nb != 0){
        list[k] = nb % 16;
        nb = nb / 16;
        k++;
    }
    for (int j = k - 1; j >= 0; j--) {
        count += gest_modulo_x(list, j);
    }
    *check = 0;
    return count;
}

static void gest_letter(int j, unsigned int *list)
{
    char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int index_letter = 0;

    index_letter = list[j] % 10;
    if (letter[index_letter] >= 'a' && letter[index_letter] <= 'z')
        my_putchar(letter[index_letter] - 32);
}

static int gest_loop_big_x(unsigned int *list, int k)
{
    int count = 0;

    for (int j = k - 1; j >= 0; j--) {
        if (list[j] >= 10) {
            gest_letter(j, list);
            count = count + 1;
        }
        if (list[j] <= 9) {
            my_put_unbr(list[j]);
            count = count + 1;
        }
    }
    return count;
}

int modulo_big_x(va_list args, int *check, int count)
{
    int k = 0;
    unsigned int nb = va_arg(args, unsigned int);
    unsigned int list[32];

    while (nb != 0){
        list[k] = nb % 16;
        nb = nb / 16;
        k++;
    }
    count += gest_loop_big_x(list, k);
    *check = 0;
    return count;
}
