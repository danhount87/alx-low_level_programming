/* @zinzinpolice */
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates
 * a memory block using malloc and free
 * @ptr: pointer to the memory allocated
 * @old_size: size of the allocated space of ptr
 * @new_size: size of the new memory block.
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
