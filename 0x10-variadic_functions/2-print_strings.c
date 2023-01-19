#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/* @zinzinpolice */
/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: Number of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stg;
	char *rng;
	unsigned int ide;

	va_start(stg, n);

	for (ide = 0; ide < n; ide++)
	{
		rng = va_arg(stg, char *);

		if (rng == NULL)
			printf("(nil)");
		else
			printf("%s", rng);

		if (ide != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stg);
}
