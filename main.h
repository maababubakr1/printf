#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;


int _printf(const char *format, ...);

int (*format_checker(const char *format))(va_list);

int _putchar(char c);

int print_c(va_list chr);

int print_s(va_list string);

int print_d(va_list dec);

int print_i(va_list decimal);

int print_b(va_list be);

#endif
