#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Our program prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char br;

	for (br = '0'; br <= '9'; br++)
	{
		putchar(br);
	}
	for (br = 'a'; br <= 'f'; br++)
	{
		putchar(br);
	}
	putchar('\n');
	return (0);
}
