#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to char paramamaters
 * @b: character to fill the memory with
 * @n: number of bytes to be filled
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
