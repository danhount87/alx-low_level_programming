#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to be encoded
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	int j, k;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[j] == s1[k] || s[j] == S1[k])
			{
				s[j] = s2[k];
				break;
			}
		}
	}
	return (s);
}
