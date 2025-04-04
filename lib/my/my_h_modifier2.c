/*
** EPITECH PROJECT, 2024
** h modifier
** File description:
** h modifier
*/

#include "my.h"

static int gest_modulo_x(unsigned short int *list, int j)
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
        my_put_sunbr(list[j]);
        count = count + 1;
    }
    return count;
}

int modulo_hx(va_list args, int *check, int count)
{
    int k = 0;
    unsigned short int nb = (unsigned short int)va_arg(args, int);
    unsigned short int list[32];

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

int modulo_big_hx(va_list args, int *check, int count)
{
    int k = 0;
    unsigned short int nb = (unsigned short int)va_arg(args, int);
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
