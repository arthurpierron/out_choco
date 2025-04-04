/*
** EPITECH PROJECT, 2024
** my_putfloat
** File description:
** float
*/

#include "my.h"

double rounded(int p)
{
    int r = 0;
    double round = 0.5;

    while (r < p) {
        round /= 10;
        r++;
    }
    return round;
}

int my_putfloat(double nb, int p)
{
    int num = nb;
    float decimal = 0;
    int digit = 0;

    my_put_nbr(num);
    my_putchar('.');
    decimal = nb - num;
    if (decimal < 0)
        decimal = - decimal;
    decimal += rounded(p);
    for (int i = 0; i < p; i++) {
        decimal = decimal * 10;
        digit = decimal;
        my_put_nbr(digit);
        decimal -= digit;
    }
    return 0;
}
