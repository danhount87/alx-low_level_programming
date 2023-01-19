#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/* @zinzinpolice */
/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbre;
	unsigned int ide;

	va_start(nbre, n);

	for (ide = 0; ide < n; ide++)
	{
		printf("%d", va_arg(nbre, int));

		if (ide != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nbre);
}
