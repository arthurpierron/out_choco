/*
** EPITECH PROJECT, 2024
** my_nb_llength
** File description:
** nb lengh for long int
*/

int my_nb_llength(long int nb)
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
