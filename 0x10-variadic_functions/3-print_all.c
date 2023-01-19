#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/* @zinzinpolice */
/**
 * print_all - function that prints anything.
 * @format: types of arguments
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sep = "";
	va_list vat;

	va_start(vat, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(vat, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(vat, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(vat, double));
					break;
				case 's':
					str = va_arg(vat, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(vat);
}

