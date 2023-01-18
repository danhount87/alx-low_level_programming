#include "function_pointers.h"
/* @zinzinpolice */
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
			{
				return (j);
			}
		}
	}
	return (-1);
}
