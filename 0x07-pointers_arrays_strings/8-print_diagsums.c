#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals.
 * @a: a pointer of type integer
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int j, ad = 0, add = 0;

	for (j = 0; j < size; j++)
	{
		ad += *(a + (size * j + j));
		add += *(a + (size * j + size - 1 - j));
	}
	printf("%d, ", ad);
	printf("%d\n", add);
}
