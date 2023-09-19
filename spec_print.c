#include "main.h"

/**
*print_c - A function that prints a character.
*@chr: character to be printed
*Return: 1 (Success)
*/

int print_c(va_list chr)
{
	char c = va_arg(chr, int);

	_putchar(c);
	return (1);
}

/**
*print_s - a function that prints a string
*@string: a string to be printed
*Return: number of bytes
*/

int print_s(va_list string)
{
	char *p = va_arg(string, char *);
	int n = 0;

	if (p == NULL)
		p = "(null)";
	while (p[n])
	{
		_putchar(p[n]);
		n++;
	}
	return (n);
}
