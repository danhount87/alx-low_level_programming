#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: variable used in this function
 * Return: 1 if character is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
