/* @zinzinpolice */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an
 * array of integers.
 * @min: the minimum val
 * @max: the maximum val
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ag, int j;

	if (min > max)
		return (NULL);

	ag = malloc(sizeof(*ag) * ((max - min) + 1));

	if (ag == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		ag[j] = min;

	return (ag);
}
