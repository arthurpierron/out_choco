/*
** EPITECH PROJECT, 2024
** lib.h
** File description:
** lib.h
*/

#ifndef MY
    #define MY

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
typedef struct {
    char identifier;
    int (*parse)(va_list args, int *check, int count);
} formatter_t;

typedef struct {
    char modi_identifier;
    int (*modi_parse) (va_list args, const char *format, int *i, int *check);
} modifer_t;

typedef struct {
    char identifier;
    int (*parse)(va_list args, int *check, int count);
} modifierl_t;

typedef struct {
    char identifier;
    int (*parse)(va_list args, int *check, int count);
} modiferh_t;

typedef struct {
    char identifier;
    int (*parse)(va_list args, int *check, int count);
} modifierz_t;

typedef struct {
    char identifier;
    int (*parse)(va_list args, int *check, int count);
} modifiert_t;

int modulo_s(va_list args, int *check, int count);
int modulo_modulo(va_list args, int *check, int count);
int modulo_i(va_list args, int *check, int count);
int modulo_d(va_list args, int *check, int count);
int modulo_c(va_list args, int *check, int count);
int modulo_u(va_list args, int *check, int count);
int modulo_o(va_list args, int *check, int count);
int modulo_x(va_list args, int *check, int count);
int modulo_big_x(va_list args, int *check, int count);
int modulo_p(va_list args, int *check, int count);
int modulo_n(va_list args, int *check, int count);
int modulo_f(va_list args, int *check, int count);
int modulo_e(va_list args, int *check, int count);
int modulo_big_e(va_list args, int *check, int count);
int modulo_g(va_list args, int *check, int count);
int modulo_l(va_list args, const char *format, int *i, int *check);
int modulo_lo(va_list args, int *check, int count);
int modulo_lx(va_list args, int *check, int count);
int modulo_big_lx(va_list args, int *check, int count);
int modulo_lu(va_list args, int *check, int count);
int modulo_li(va_list args, int *check, int count);
int modulo_ld(va_list args, int *check, int count);
int modulo_h(va_list args, const char *format, int *i, int *check);
int modulo_hi(va_list args, int *check, int count);
int modulo_hd(va_list args, int *check, int count);
int modulo_hu(va_list args, int *check, int count);
int modulo_ho(va_list args, int *check, int count);
int modulo_hx(va_list args, int *check, int count);
int modulo_big_hx(va_list args, int *check, int count);
int modulo_z(va_list args, const char *format, int *i, int *check);
int modulo_zi(va_list args, int *check, int count);
int modulo_zd(va_list args, int *check, int count);
int modulo_zu(va_list args, int *check, int count);
int modulo_zo(va_list args, int *check, int count);
int modulo_zx(va_list args, int *check, int count);
int modulo_big_zx(va_list args, int *check, int count);
int modulo_t(va_list args, const char *format, int *i, int *check);
int modulo_ti(va_list args, int *check, int count);
int modulo_td(va_list args, int *check, int count);
int modulo_tu(va_list args, int *check, int count);
int modulo_to(va_list args, int *check, int count);
int modulo_tx(va_list args, int *check, int count);
int modulo_big_tx(va_list args, int *check, int count);
int my_printf(const char *format, ...);
int my_convertnbr(double nb, int *count);
int my_nb_length(int nb);
int my_nb_llength(long int nb);
int my_nb_plength(ptrdiff_t nb);
int my_putfloat_count(double nb, int p, int *count);
int my_putscientific(double nb, int p);
int my_putscientific_count(double nb, int p, int *count);
int my_putscientific_big_e(double nb, int p, int *count);
int my_putfloat(double nb, int p);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_put_unbr(unsigned int nb);
int my_put_lnbr(long int nb);
int my_put_lunbr(long unsigned int nb);
int my_put_snbr(short int nb);
int my_put_sunbr(unsigned short int nb);
int my_put_pnbr(ptrdiff_t nb);
int my_putstr(char const *str);
int my_strlen(char const *str);

#endif
