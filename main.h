#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list lst);
int print_str(va_list lst);
int print_nbr(va_list lst);
int print_binary(va_list lst);
int print_octal(va_list lst);
int print_hexa_lower(va_list lst);
int print_hexa_upper(va_list lst);
int print_unsigned(va_list lst);
int print_str_unprintable(va_list lst);
int print_str_reverse(va_list lst);
int print_ptr(va_list lst);
int print_rot13(va_list lst);
int print_percent(va_list lst __attribute__((unused)));
int print_number(int n);
int print_unsigned_number(unsigned int n);
int _putchar(char c);
int _puts(char *str, int ascii);
int _nbr_len(int prmNumber);
int _strlen_recursion(char *s);
int convert_alpha_numeric(int nb, int upper);
char *convert_rot13(char *str);
char *convert_base(unsigned long nb, unsigned int base, int upper);
char *_strdup(char *str);
char *convert_base_pointer(unsigned long p);

/**
 * struct flags_printf - struct conversion to function
 * @c: flag string
 * @f: pointer to func
 */

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
} flags_p;
#endif
