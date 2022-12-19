#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the pointer to the string to be printed
 */

void puts_half(char *str)
{
	int i = 0, l = 0, m;

	while (str[i++])
		l++;

	if ((l % 2) == 0)
		m = l / 2;

	else
		m = (l + 1) / 2;

	for (i = m; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
