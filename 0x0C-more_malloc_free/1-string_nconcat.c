#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int tail = 0, taille = 0, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[tail] != '\0')
	{
		tail++;
	}

	while (s2[taille] != '\0')
	{
		taille++;
	}

	if (n > taille)
		n = taille;
	m = malloc((tail + n + 1) * sizeof(char));

	if (m == NULL)
		return (0);

	for (j = 0; j < tail; j++)
	{
		m[j] = s1[j];
	}

	for (; j < (tail + n); j++)
	{
		m[j] = s2[j - tail];
	}
	m[j] = '\0';

	return (m);
}
