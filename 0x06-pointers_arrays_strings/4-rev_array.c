#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: array length
 */

void reverse_array(int *a, int n)
{
	int j = 0, mde;

	for (mde = n / 2; mde > 0; mde--, j++)
	{
		a[n - j - 1] += a[j];
		a[j] = a[n - j - 1] - a[j];
		a[n - j - 1] = a[n - j - 1] - a[j];
	}
}
