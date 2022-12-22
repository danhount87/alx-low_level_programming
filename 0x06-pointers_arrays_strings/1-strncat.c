#include "main.h"

/**
 * _strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int id = 0, dest_ln = 0;

	while (dest[id++])
		dest_ln++;

	for (id = 0; src[id] && id < n; id++)
		dest[dest_ln++] = scr[id];

	return (dest);
}
