#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer
 * Return: the return goes to the changed string
 */

char *string_toupper(char *str)
{
	int id = 0;

	while (str[id])
	{
		if (str[id] >= 'a' && str[id] <= 'z')
			str[id] -= 32;

		id++;
	}

	return (str);
}
