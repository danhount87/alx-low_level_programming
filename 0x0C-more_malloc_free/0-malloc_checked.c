#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the byte allocated
 * Return: to the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
