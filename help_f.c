#include "main.h"

/**
*format_checker - A function that checks for a format specifiers
*@format: a character string that may contain a specifier
*Return: A pointer to a specifier found or NULL
*/

int (*format_checker(const char *format))(va_list)
{
	int n;
	print_t s[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};

	for (n = 0; s[n].t != NULL; n++)
	{
		if (*(s[n].t) == *format)
			break;
	}
	return (s[n].f);
}

/**
*_putchar -write the character c to stdout
*@c: character to be printed.
*Return: 1 (Success) , -1 (Error).
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
