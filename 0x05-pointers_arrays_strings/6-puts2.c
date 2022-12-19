#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the pointer to the string to print
 */

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}

		j++;
	}
	_putchar('\n');
}
