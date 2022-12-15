#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 & 4
 */

void print_most_numbers(void)
{
	char j = 0;

	while (j <= 9)
	{
		if (j != 2 && j != 4)
		{
			_putchar('0' + j);
		}

		j++;
	}
	_putchar('\n');

}

