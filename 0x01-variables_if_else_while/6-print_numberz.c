#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar((b % 10) + '0');
		b++;
	}

	putchar('\n');
	return (0);
}
