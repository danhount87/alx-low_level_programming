#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : variable to be used in the function
 */

void print_diagonal(int n)
{

	int j = 0, k;

	while (j < n && n > 0)
	{
		k = 0;
		while (k < j)
		{
			_putchar(' ');
			k++;
		}

		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (j == 0)
		_putchar('\n');

}
