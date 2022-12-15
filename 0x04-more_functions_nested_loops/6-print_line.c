#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n : variable used in the function
 */

void print_line(int n)
{

	int k = 0;

	while (k < n && n > 0)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');

}
