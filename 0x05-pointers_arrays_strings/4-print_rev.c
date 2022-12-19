#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the pointer to the string to print
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
