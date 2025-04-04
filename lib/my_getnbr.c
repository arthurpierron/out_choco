/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** getnbr
*/
#include "my.h"

long adnbr(int i, long res, char const *str)
{
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        i += 1;
    }
    return res;
}

int my_getnbr(char const *str)
{
    int i = 0;
    long res = 0;
    int sign = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = sign * -1;
        i += 1;
    }
    res = adnbr(i, res, str);
    res = res * sign;
    if (res < -2147483648 || res > 2147483647)
        return 0;
    return (int)res;
}
