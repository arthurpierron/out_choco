/*
** EPITECH PROJECT, 2024
** delivery
** File description:
** test_my.c
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_add, should_add_two_numbers)
{
    cr_assert_eq(my_add(2, 3), 5);
    cr_assert_eq(my_add(-1, 1), 0);
    cr_assert_eq(my_add(0, 0), 0);
}