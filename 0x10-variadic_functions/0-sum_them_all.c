#include "variadic_functions.h"
#include <stdarg.h>
/* @zinzinpolice */
/**
 * sum_them_all - function that returns
 * the sum of all its parameters.
 * @n: number parameter
 * @...: variable number
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list abi;
	unsigned int j, rslt = 0;

	va_start(abi, n);

	for (j = 0; j < n; j++)
		rslt += va_arg(abi, int);

	va_end(abi);

	return (rslt);
}
