#include "main.h"

/**
 *print_b - A function that prints unsigned integer in binary
 *@be: unsigned integers to be printed
 *Return: Number of printed integers
 */

int print_b(va_list be)
{
	unsigned int x[32];
	unsigned int k, l, m = 2147483648, sum = 0;
	int no = 0;

	k = va_arg(be, unsigned int);
	x[0] = k / m;

	for (l = 1; l < 32; l++)
	{
		m /= 2;
		x[l] = (k / m) % 2;
	}

	for (l = 0; l < 32; l++)
	{
		sum += x[l];
		if (sum || l == 31)
		{
			_putchar('0' + x[l]);
			no++;
		}
	}
	return (no);
}
