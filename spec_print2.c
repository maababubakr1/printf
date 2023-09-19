#include "main.h"

/**
 * print_d - a function that prints an intger
 *@dec : a list to be printed
 * Return: number of the integers printed
 */

int print_d(va_list dec)
{
int x[10];
int m  = 1000000000, no = 0, sum  = 0, y, v;
v = va_arg(dec, int);

x[0] = v / m;
if (v < 0)
{
v *= -1;
_putchar('-');
no++;
}
for (y = 1; y < 10; y++)
{
m /= 10;
x[y] = (v / m) % 10;
}
for (y = 0; y < 10;  y++)
{
sum += x[y];
if (sum != 0 || y == 9)
{
_putchar(x[y] + '0');
no++;
}
}
return (no);
}
