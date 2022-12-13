#include "main.h"

/**
 * print_sign - check numbers
 * @n : number to check
 * Return:0 or 1
 */

int print_sign(int n)
{
	int g;

	if (n > 0)
	{
		g = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		g = 0;
		_putchar('0');
	}
	else
	{
		g = -1;
		_putchar('-');
	}

	return (g);
}
