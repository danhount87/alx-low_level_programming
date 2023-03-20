#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int id = 0, dest_ln = 0;

	while (dest[id++])
		dest_ln++;

	for (id = 0; src[id]; id++)
		dest[dest_ln++] = src[id];

	return (dest);
}
