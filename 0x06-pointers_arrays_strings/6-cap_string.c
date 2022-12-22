#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer
 * Return: pointer to the change string
 */

char *cap_string(char *str)
{
	int dx = 0;

	while (str[dx])
	{
		while (!(str[dx] >= 'a' && str[dx] <= 'z'))
			dx++;

		if (str[dx - 1] == ' ' || str[dx - 1] == '\t' || str[dx - 1] == '\n' ||
		    str[dx - 1] == ',' || str[dx - 1] == ';' || str[dx - 1] == '.' ||
		    str[dx - 1] == '!' || str[dx - 1] == '?' || str[dx - 1] == '"' ||
		    str[dx - 1] == '(' || str[dx - 1] == ')' || str[dx - 1] == '{' ||
		    str[dx - 1] == '}' || dx == 0)
			str[dx] -= 32;

		dx++;
	}

	return (str);
}
