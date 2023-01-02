#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int k, v;

	for (k = 0; k < 8; k++)
	{
		for (v = 0; v < 8; v++)
		{
			_putchar(*(*(k + a) + v));
		}
	_putchar('\n');
	}
}
