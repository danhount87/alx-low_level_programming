#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsigned int br = n;

	if (n < 0)
	{
		_putchar('-');
		br = -br;
	}

	if ((br / 10) > 0)
		print_number(br / 10);

	_putchar((br % 10) + '0');
}
