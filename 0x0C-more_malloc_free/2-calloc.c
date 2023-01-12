#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *h;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	h = malloc(nmemb * size);

	if (h == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		h[j] = 0;

	return (h);
}
