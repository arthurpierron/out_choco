/*
** EPITECH PROJECT, 2024
** Untitled (Workspace)
** File description:
** test_my_printf.c
*/

#include"../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std( void )
{
cr_redirect_stdout();
cr_redirect_stderr();
}

Test(my_printf, modulo_s, .init = redirect_all_std)
{
    char *str = "hello";

    my_printf("%s", str);
    cr_assert_stdout_eq_str("hello");
}

Test(my_printf, modulo_c, .init = redirect_all_std)
{
    char c = 'l';

    my_printf("%c", c);
    cr_assert_stdout_eq_str("l");
}

Test(my_printf, modulo_i, .init = redirect_all_std)
{
    int i = 55;

    my_printf("%i", i);
    cr_assert_stdout_eq_str("55");
}

Test(my_printf, modulo_i_2, .init = redirect_all_std)
{
    int i = -55;

    my_printf("%i", i);
    cr_assert_stdout_eq_str("-55");
}

Test(my_printf, modulo_li, .init = redirect_all_std)
{
    long int i = 55555555555555;

    my_printf("%li", i);
    cr_assert_stdout_eq_str("55555555555555");
}

Test(my_printf, modulo_li_2, .init = redirect_all_std)
{
    long int i = -55555555555555;

    my_printf("%li", i);
    cr_assert_stdout_eq_str("-55555555555555");
}

Test(my_printf, modulo_hi, .init = redirect_all_std)
{
    short int i = 555;

    my_printf("%hi", i);
    cr_assert_stdout_eq_str("555");
}

Test(my_printf, modulo_hi_2, .init = redirect_all_std)
{
    short int i = -555;

    my_printf("%hi", i);
    cr_assert_stdout_eq_str("-555");
}

Test(my_printf, modulo_zi, .init = redirect_all_std)
{
    size_t zi = 12345;

    my_printf("%zi", zi);
    cr_assert_stdout_eq_str("12345");
}

Test(my_printf, modulo_zi_2, .init = redirect_all_std)
{
    size_t zi = -12345;

    my_printf("%zi", zi);
    cr_assert_stdout_eq_str("-12345");
}

Test(my_printf, modulo_ti, .init = redirect_all_std)
{
    ptrdiff_t ti = 8999999;

    my_printf("%ti", ti);
    cr_assert_stdout_eq_str("8999999");
}

Test(my_printf, modulo_ti_2, .init = redirect_all_std)
{
    ptrdiff_t ti = -8999999;

    my_printf("%ti", ti);
    cr_assert_stdout_eq_str("-8999999");
}

Test(my_printf, modulo_d, .init = redirect_all_std)
{
    int d = 78;

    my_printf("%d", d);
    cr_assert_stdout_eq_str("78");
}

Test(my_printf, modulo_d_2, .init = redirect_all_std)
{
    int d = -78;

    my_printf("%d", d);
    cr_assert_stdout_eq_str("-78");
}

Test(my_printf, modulo_ld, .init = redirect_all_std)
{
    long int i = 55555555555555;

    my_printf("%ld", i);
    cr_assert_stdout_eq_str("55555555555555");
}

Test(my_printf, modulo_ld_2, .init = redirect_all_std)
{
    long int i = -55555555555555;

    my_printf("%ld", i);
    cr_assert_stdout_eq_str("-55555555555555");
}

Test(my_printf, modulo_hd, .init = redirect_all_std)
{
    short int i = 555;

    my_printf("%hd", i);
    cr_assert_stdout_eq_str("555");
}

Test(my_printf, modulo_hd_2, .init = redirect_all_std)
{
    short int i = -555;

    my_printf("%hd", i);
    cr_assert_stdout_eq_str("-555");
}

Test(my_printf, modulo_zd, .init = redirect_all_std)
{
    size_t zi = 12345;

    my_printf("%zd", zi);
    cr_assert_stdout_eq_str("12345");
}

Test(my_printf, modulo_zd_2, .init = redirect_all_std)
{
    size_t zi = -12345;

    my_printf("%zd", zi);
    cr_assert_stdout_eq_str("-12345");
}

Test(my_printf, modulo_td, .init = redirect_all_std)
{
    ptrdiff_t ti = 8999999;

    my_printf("%td", ti);
    cr_assert_stdout_eq_str("8999999");
}

Test(my_printf, modulo_td_2, .init = redirect_all_std)
{
    ptrdiff_t ti = -8999999;

    my_printf("%td", ti);
    cr_assert_stdout_eq_str("-8999999");
}

Test(my_printf, modulo_modulo, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, modulo_u, .init = redirect_all_std)
{
    unsigned int u = 80;

    my_printf("%u", u);
    cr_assert_stdout_eq_str("80");
}

Test(my_printf, modulo_lu, .init = redirect_all_std)
{
    unsigned long int u = 80000000000;

    my_printf("%lu", u);
    cr_assert_stdout_eq_str("80000000000");
}

Test(my_printf, modulo_hu, .init = redirect_all_std)
{
    unsigned short int u = 5555;

    my_printf("%hu", u);
    cr_assert_stdout_eq_str("5555");
}

Test(my_printf, modulo_zu, .init = redirect_all_std)
{
    size_t zu = 88667;

    my_printf("%zu", zu);
    cr_assert_stdout_eq_str("88667");
}

Test(my_printf, modulo_tu, .init = redirect_all_std)
{
    ptrdiff_t ti = 8999999;

    my_printf("%tu", ti);
    cr_assert_stdout_eq_str("8999999");
}

Test(my_printf, modulo_o, .init = redirect_all_std)
{
    unsigned int o = 80;

    my_printf("%o", o);
    cr_assert_stdout_eq_str("120");
}

Test(my_printf, modulo_o_2, .init = redirect_all_std)
{
    unsigned int o = 5;

    my_printf("%o", o);
    cr_assert_stdout_eq_str("5");
}

Test(my_printf, modulo_lo, .init = redirect_all_std)
{
    unsigned int o = 800000000;

    my_printf("%lo", o);
    cr_assert_stdout_eq_str("5753604000");
}

Test(my_printf, modulo_lo_2, .init = redirect_all_std)
{
    unsigned long int o = 80;

    my_printf("%lo", o);
    cr_assert_stdout_eq_str("120");
}

Test(my_printf, modulo_ho, .init = redirect_all_std)
{
    unsigned short int o = 80;

    my_printf("%ho", o);
    cr_assert_stdout_eq_str("120");
}

Test(my_printf, modulo_ho_2, .init = redirect_all_std)
{
    unsigned short int o = 5;

    my_printf("%ho", o);
    cr_assert_stdout_eq_str("5");
}

Test(my_printf, modulo_zo, .init = redirect_all_std)
{
    size_t zu = 80;

    my_printf("%zo", zu);
    cr_assert_stdout_eq_str("120");
}

Test(my_printf, modulo_zo_2, .init = redirect_all_std)
{
    size_t zu = 5;

    my_printf("%zo", zu);
    cr_assert_stdout_eq_str("5");
}

Test(my_printf, modulo_to, .init = redirect_all_std)
{
    ptrdiff_t ti = 5789;

    my_printf("%to", ti);
    cr_assert_stdout_eq_str("13235");
}

Test(my_printf, modulo_to_2, .init = redirect_all_std)
{
    ptrdiff_t ti = 5;

    my_printf("%to", ti);
    cr_assert_stdout_eq_str("5");
}

Test(my_printf, modulo_x, .init = redirect_all_std)
{
    long int x = 555;

    my_printf("%x", x);
    cr_assert_stdout_eq_str("22b");
}

Test(my_printf, modulo_lx, .init = redirect_all_std)
{
    long int x = 555;

    my_printf("%lx", x);
    cr_assert_stdout_eq_str("22b");
}

Test(my_printf, modulo_hx, .init = redirect_all_std)
{
    short int x = 555;

    my_printf("%hx", x);
    cr_assert_stdout_eq_str("22b");
}

Test(my_printf, modulo_zx, .init = redirect_all_std)
{
    size_t zx = 6784;

    my_printf("%zx", zx);
    cr_assert_stdout_eq_str("1a80");
}

Test(my_printf, modulo_tx, .init = redirect_all_std)
{
    ptrdiff_t ti = 5789;

    my_printf("%tx", ti);
    cr_assert_stdout_eq_str("169d");
}

Test(my_printf, modulo_big_x, .init = redirect_all_std)
{
    long int x = 555;

    my_printf("%X", x);
    cr_assert_stdout_eq_str("22B");
}

Test(my_printf, modulo_big_lx, .init = redirect_all_std)
{
    long int x = 555;

    my_printf("%lX", x);
    cr_assert_stdout_eq_str("22B");
}

Test(my_printf, modulo_big_hx, .init = redirect_all_std)
{
    long int x = 555;

    my_printf("%hX", x);
    cr_assert_stdout_eq_str("22B");
}

Test(my_printf, modulo_big_zx, .init = redirect_all_std)
{
    size_t zx = 6784;

    my_printf("%zX", zx);
    cr_assert_stdout_eq_str("1A80");
}

Test(my_printf, modulo_big_tx, .init = redirect_all_std)
{
    ptrdiff_t ti = 5789;

    my_printf("%tX", ti);
    cr_assert_stdout_eq_str("169D");
}

Test(my_printf, modulo_f, .init = redirect_all_std)
{
    double f = 555.555;

    my_printf("%f", f);
    cr_assert_stdout_eq_str("555.555000");
}

Test(my_printf, modulo_f_2, .init = redirect_all_std)
{
    double f = -555.555;

    my_printf("%f", f);
    cr_assert_stdout_eq_str("-555.555000");
}

Test(my_printf, modulo_big_f, .init = redirect_all_std)
{
    double f = 555.555;

    my_printf("%F", f);
    cr_assert_stdout_eq_str("555.555000");
}

Test(my_printf, modulo_e, .init = redirect_all_std)
{
    double e = 5556.3256;

    my_printf("%e", e);
    cr_assert_stdout_eq_str("5.556326e+03");
}

Test(my_printf, modulo_e_2, .init = redirect_all_std)
{
    double e = -555555555;

    my_printf("%e", e);
    cr_assert_stdout_eq_str("-5.555556e+08");
}

Test(my_printf, modulo_e_3, .init = redirect_all_std)
{
    double e = -0.00005;

    my_printf("%e", e);
    cr_assert_stdout_eq_str("-5.000000e-05");
}

Test(my_printf, modulo_big_e, .init = redirect_all_std)
{
    double e = 5556.3256;

    my_printf("%E", e);
    cr_assert_stdout_eq_str("5.556326E+03");
}

Test(my_printf, modulo_big_e_2, .init = redirect_all_std)
{
    double e = -555555555;

    my_printf("%E", e);
    cr_assert_stdout_eq_str("-5.555556E+08");
}

Test(my_printf, modulo_big_e_3, .init = redirect_all_std)
{
    double e = -0.00005;

    my_printf("%E", e);
    cr_assert_stdout_eq_str("-5.000000E-05");
}

Test(my_printf, modulo_g, .init = redirect_all_std)
{
    double g = 555;

    my_printf("%g", g);
    cr_assert_stdout_eq_str("555");
}

Test(my_printf, modulo_g_2, .init = redirect_all_std)
{
    double e = 5556.3256;

    my_printf("%g", e);
    cr_assert_stdout_eq_str("5556.3256");
}

Test(my_printf, modulo_g_3, .init = redirect_all_std)
{
    double e = -5556.3256;

    my_printf("%g", e);
    cr_assert_stdout_eq_str("-5556.3256");
}

Test(my_printf, modulo_g_4, .init = redirect_all_std)
{
    double e = 55555555555555;

    my_printf("%g", e);
    cr_assert_stdout_eq_str("5.55556e+13");
}

Test(my_printf, modulo_g_5, .init = redirect_all_std)
{
    double e = -55555555555555;

    my_printf("%g", e);
    cr_assert_stdout_eq_str("-5.55556e+13");
}

Test(my_printf, modulo_p, .init = redirect_all_std)
{
    my_printf("%p", 1);
    cr_assert_stdout_eq_str("0x1");
}

Test(my_printf, modulo_rien, .init = redirect_all_std)
{
    my_printf("%r");
    cr_assert_stdout_eq_str("%r");
}

Test(my_printf, modulo_rien_modulo, .init = redirect_all_std)
{
    my_printf("%l%");
    cr_assert_stdout_eq_str("%");
}