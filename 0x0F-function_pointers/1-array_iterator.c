#include "function_pointers.h"
#include <stdio.h>
/* @zinzinpolice */
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: the size of the array
 * @action: a pointer to the function
 * you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
