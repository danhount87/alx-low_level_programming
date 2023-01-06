#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: string to be look for.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	char *r = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				h++;
				break;
			}
		if (!(*--accept))
			break;
		accept = r;
	}
	return (h);
}

