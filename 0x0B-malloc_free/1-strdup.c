#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter.
 * @str: pointer
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int j = 0, k;

	if (!str)
		return (NULL);

	while (*(str + j))
		j++;
	j++;
	s = malloc(sizeof(char) * j);

	if (s == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= j; k++)
	{
		s[k] = str[k];
	}
	return (s);
}
