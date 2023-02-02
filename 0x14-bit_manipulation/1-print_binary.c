#include "main.h"
/* @zinzinpolice */
/**
 * print_binary - function that prints the binary
 * representation of a number.
 * @n: number that we have to print into binary
 */
void print_binary(unsigned long int n)
{
	int j, cnt = 0;
	unsigned long int cent;

	for (j = 63; j >= 0; j--)
	{
		cent = n >> j;
		if (cent & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
