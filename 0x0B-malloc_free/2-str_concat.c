#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: character
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int idx, concat_idx =  0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx] || s2[idx]; idx++)
		l++;

	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (idx = 0; s1[idx]; idx++)
		concat_str[concat_idx++] = s1[idx];

	for (idx = 0; s2[idx]; idx++)
		concat_str[concat_idx++] = s2[idx];

	return (concat_str);
}
