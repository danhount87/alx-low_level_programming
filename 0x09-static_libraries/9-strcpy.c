#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char of type string
 * @src: char of type string
 * Return: pointer to destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
