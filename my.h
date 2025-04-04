/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** header file task02
*/
#include <stdarg.h>

#ifndef MY_H
    #define MY_H

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_printf(const char *format, ...);
void flag_d_i_s_c(const char *format, int i, va_list ap);
void flag_o_u_x_x(const char *format, int i, va_list ap);
void flag_n(const char *format, int i, va_list ap);
void flag_f(const char *format, int i, va_list ap);
void flag_p(const char *format, int i, va_list ap);
int conv_base(unsigned int nb, int base);
int conv_basex(unsigned int nb, int base);
void condition(char **tab, char const *str, int len_mot, int j);
long adnbr(int i, long res, char const *str);
char *retour(const char *format, int i, int count, char flag);
int my_preci(const char *format, int i);
void rounded2(int pro, int sp, int actu);
void rounded(double sp, int preci);
void my_putfloat(double nb, int preci, int fp, double sp);
int conv_base_p(unsigned long int nb, int base);
void expo(double nb, int preci, int fp, double sp);
void flag_e(const char *format, int i, va_list ap);
void my_putfloat_e(double nb, int preci, int fp, double sp);
void pui(int count, double nb, int temp);
void flag_emaj(const char *format, int i, va_list ap);
int flag(const char *format, int i, va_list ap);
int flag2(const char *format, int i, va_list ap);
void pui_emaj(int count, double nb, int temp);
void my_putfloat_emaj(double nb, int preci, int fp, double sp);
void expo_emaj(double nb, int preci, int fp, double sp);
int space(const char *format, int i, va_list ap, int counter);
void flag_lmaj(const char *format, int i, va_list ap);
void expo_long(long double nb, int preci, int fp, long double sp);
void expo_emaj_long(long double nb, int preci, int fp, long double sp);
void roundedlong(long double sp, int preci);

#endif /* MY_H */
