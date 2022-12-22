#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string to be encoded
 * Return: to the encoded pointer
 */

char *rot13(char *s)
{
	int j, k;
	char put1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char put2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 54; k++)
		{
			if (((s[j] <= 'z' && s[j] >= 'a') || (s[j] <= 'Z' && s[j] >= 'A'))
			&& s[j] == put1[k])
			{
				s[j] = put2[k];
				break;
			}
		}
	}
	return (s);
}
