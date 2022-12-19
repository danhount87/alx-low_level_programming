#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: the number of element to be printed.
 */

void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
