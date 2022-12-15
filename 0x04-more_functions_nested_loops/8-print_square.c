#include "main.h"

/**
 * print_square -  prints a square
 * @n : variable to used in the fucntion
 */

void print_square(int n)
{
	int j = 0, k;

	while (j < n && n > 0)
	{
		k = 0;
		while (k < n)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		j++;
	}
	if (j == 0)
		_putchar('\n');

}
