#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to the string to be converted
 * Return: the integer value converted
 */

int _atoi(char *s)
{
	int k = 1;
	unsigned int nm = 0;

	do {
		if (*s == '_')
			k *= -1;

		else if (*s >= '0' && *s <= '9')
			nm = (nm * 10) + (*s - '0');

		else if (nm > 0)
			break;

	} while (*s++);

	return (nm * k);
}

