#include "main.h"

/**
 * print last_digit - print the last digit of a number.
 * @n : the number in question
 * Return: integer value
 */

int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
		last_d = last_d * -1;

	_putchar(last_d + '0');

	return (last_d);
}
