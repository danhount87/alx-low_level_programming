#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the pointer to the string to check
 * Return: the length of the @s
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	return (j);
}
