/*
** EPITECH PROJECT, 2024
** test my_printf
** File description:
** my_printf
*/

# include <criterion/criterion.h>
# include <criterion/redirect.h>
# include "../lib/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, flag_i, .init = redirect_all_std)
{
    my_printf("j'ai %i ans", 52);
    cr_assert_stdout_eq_str("j'ai 52 ans");
}

Test(my_printf, flag_d, .init = redirect_all_std)
{
    my_printf("j'ai %d ans", 52);
    cr_assert_stdout_eq_str("j'ai 52 ans");
}

Test(my_printf, flag_s, .init = redirect_all_std)
{
    my_printf("je m'appelle %s", "Arthur et Thomas" );
    cr_assert_stdout_eq_str("je m'appelle Arthur et Thomas");
}

Test(my_printf, flag_e, .init = redirect_all_std)
{
    my_printf("j'ai %e ans", 58.643);
    cr_assert_stdout_eq_str("j'ai 5.864300e+01 ans");
}

Test(my_printf, flag_x_X, .init = redirect_all_std)
{
    my_printf("go %x min ou %X", 255, 255);
    cr_assert_stdout_eq_str("go ff min ou FF");
}

Test(my_printf, flag_o_u, .init = redirect_all_std)
{
    my_printf("go %o min ou %u", 255, 255);
    cr_assert_stdout_eq_str("go 377 min ou 255");
}

Test(my_printf, big_sentence, .init = redirect_all_std)
{
    my_printf("En %f min, j'ai courru %.1F km, %s. La prochaine fois je vise le double en %E", 25.6, 3.4, "donc je suis fier de moi", 0.0053);
    cr_assert_stdout_eq_str("En 25.600000 min, j'ai courru 3.4 km, donc je suis fier de moi. La prochaine fois je vise le double en 5.300000E-03");
}

Test(my_printf, flag_perc, .init = redirect_all_std)
{
    my_printf("j'ai eu 100%% aux tests criterions");
    cr_assert_stdout_eq_str("j'ai eu 100% aux tests criterions");
}

Test(my_printf, flag_c, .init = redirect_all_std)
{
    my_printf("go la %c%c", 'K', 'C');
    cr_assert_stdout_eq_str("go la KC");
}

Test(my_printf, flag_preci, .init = redirect_all_std)
{
    my_printf("la precision marche parfaitement, tout comme l'arrondi: %.3e %.4E %.5f %.2F", 58.3333, 583333.333, 58.333336, 58.336);
    cr_assert_stdout_eq_str("la precision marche parfaitement, tout comme l'arrondi: 5.833e+01 5.8333E+05 58.33334 58.34");
}

Test(my_printf, flag_d_space, .init = redirect_all_std)
{
    my_printf("j'ai %     d ans ou % d", 52, 89);
    cr_assert_stdout_eq_str("j'ai  52 ans ou  89");
}

Test(my_printf, flag_d_space_plus, .init = redirect_all_std)
{
    my_printf("j'ai %+     d ans ou %+d ou % +d", 52, 89, 53);
    cr_assert_stdout_eq_str("j'ai +52 ans ou +89 ou +53");
}

Test(my_printf, flag_L, .init = redirect_all_std)
{
    long double a = 15.5;
    long double b = 0.0053;

    my_printf("%Lf %LF %Le %LE", a, a, b, b);
    cr_assert_stdout_eq_str("15.500000 15.500000 5.300000e-03 5.300000E-03");
}

Test(my_printf, flag_precizero, .init = redirect_all_std)
{
    my_printf("%.f", 15.3);
    cr_assert_stdout_eq_str("15");
}

Test(my_printf, big_sentencedee, .init = redirect_all_std)
{
    my_printf("En %f min, j'ai courru %.1F km, %s. La prochaine fois je vise le double en %e", 25.6, 3.4, "donc je suis fier de moi", 0.0053);
    cr_assert_stdout_eq_str("En 25.600000 min, j'ai courru 3.4 km, donc je suis fier de moi. La prochaine fois je vise le double en 5.300000e-03");
}

Test(my_printf, flag_f_neg, .init = redirect_all_std)
{
    my_printf("j'ai %f ans", -58.64335556);
    cr_assert_stdout_eq_str("j'ai -58.643356 ans");
}

Test(my_printf, flag_n, .init = redirect_all_std)
{
    int count;

    my_printf("Je m'appelle%n", &count);
    my_printf("%d", count);
    cr_assert_stdout_eq_str("Je m'appelle12");
}
