#include "main.h"

/**
*_printf - A printf function to print format string
*@format: A character string to be printed
*Return: The number of characters printed
*/

int _printf(const char *format, ...)
{
	unsigned int m = 0, no = 0;
	va_list list;
	int (*x)(va_list);

	if (format ==  NULL)
		return (-1);
	va_start(list, format);
	for ( ; format && format[m] != '\0'; )
	{
		if (format[m] != '%')
		{
			_putchar(format[m]);
			no++;
			m++;
			continue;
		}
		else
		{
			if (format[m + 1] == '%')
			{
				_putchar('%');
				no++;
				m += 2;
				continue;
			}
			else
			{
				x = format_checker(&format[m + 1]);

				if (x == NULL)
					return (-1);
				m += 2;
				no += x(list);
				continue;
			}
		}
		no++;
	}
	va_end(list);
	return (no);
}
