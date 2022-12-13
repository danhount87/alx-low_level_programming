#include "main.h"

/**
 * print_alphabet_x10
 * Our function prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char j;
	int k = 0;

	while (k < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		k++;
	}
}

