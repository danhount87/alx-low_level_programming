#include "main.h"

/**
 * _islower - Entry point
 * Our function checks for lowercase character.
 * Return: 0 if character is lowercase, 1 otherwise
 */

int _islower(int c)
{
	if (c >= 'z' && c <= 'a')
		return (0);
	else
		return (1);
}
