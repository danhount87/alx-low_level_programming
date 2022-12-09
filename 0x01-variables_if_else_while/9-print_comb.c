#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Our program prints all possible combinations
 * of single-digit numbers.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar((b % 10) + '0');
		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
