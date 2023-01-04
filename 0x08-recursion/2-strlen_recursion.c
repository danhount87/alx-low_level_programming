#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer to take the mesure
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int lon = 0;

	if (*s)
	{
		lon++;
		lon += _strlen_recursion(s + 1);
	}

	return (lon);
}
