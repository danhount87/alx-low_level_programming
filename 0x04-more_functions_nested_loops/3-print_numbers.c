#include "main.h"

/**
 * print_numbers - prints the numbers
 * Return: 0
 */

void print_numbers(void)
{
	char n;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');

}
