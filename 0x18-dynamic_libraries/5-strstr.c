#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to be searched
 * @needle: pointer to be located
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		k = 0;

		if (haystack[k] == needle[k])
		{
			do {
				if (needle[k + 1] == '\0')
					return (haystack);

				k++;

			} while (haystack[k] == needle[k]);
		}

		haystack++;
	}

	return ('\0');
}
