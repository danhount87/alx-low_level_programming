#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Our program prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}

	putchar('\n');
	return (0);
}

