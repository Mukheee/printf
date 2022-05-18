#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct pr - struct for operations
 * @op: operation
 * @f: to be listed
 *
 * Description: Checks if there's an operation
 */
typedef struct printf
{
	char *p;
	int (*f)(va_list);
} pr_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_unsigned(va_list list);
int print_nbr(va_list list);
int print_octa(va_list list);
int print_hex(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_unassignednumber(va_list list);
int print_mod(va_list list);
int print_d(va_list list);
int _strlen(char *s);
int _funcion(const char *format, pr_f ops[], va_list ap);
#endif
