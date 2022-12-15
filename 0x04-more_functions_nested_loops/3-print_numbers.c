#include "main.h"

/**
 * print_numbers - prints the numbers
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
		_putchar((j % 10) + '0');

	_putchar('\n');
}
