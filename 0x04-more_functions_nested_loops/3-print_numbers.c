#include "main.h"

/**
 * print_numbers - prints the numbers
 * Return: 0
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
		_putchar((j % 10) + '0');

	_putchar('\n');
}
