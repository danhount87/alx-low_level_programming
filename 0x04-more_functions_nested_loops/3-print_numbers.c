#include "main.h"

/**
 * print_numbers - prints the numbers
 */

void print_numbers(void)
{
	char j;

	while (j <= 9)
	{
		_putchar('0' + j);
		j++;
	}

	_putchar('\n');
}
