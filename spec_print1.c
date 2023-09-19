#include "main.h"

/**
 * print_i - a function that prints an intger
 *@decimal : a list to be printed
 *Return: number of integers printed
 */

int print_i(va_list decimal)
{
int x[10];
int m = 1000000000, no = 0, sum  = 0, v;
unsigned int y = 1;

v = va_arg(decimal, int);

if (v < 0)
{
v *= -1;
_putchar('-');
no++;
}

x[0] = v / m;

for (; y < 10; y++)
{
m /= 10;
x[y] = (v / m) % 10;
}
for (y = 0; y < 10; y++)
{
sum += x[y];
if (sum != 0 || y == 9)
{
_putchar('0' + x[y]);
no++;
}
}
return (no);
}
