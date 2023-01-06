#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory area to copy @src into
 * @src: source to copy character from
 * @n: number of bytes
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
