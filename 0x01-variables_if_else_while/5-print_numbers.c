#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
