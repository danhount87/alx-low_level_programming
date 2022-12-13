#include <stdio.h>

/**
 * main - Entry point
 * Description:Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j = 0;
	long int c = 0, d = 1, nt;

	while (j < 50)
	{
		nt = c + d;
		c = d;
		d = nt;
		printf("%lu", nt);
		if (j < 49)
		{
			printf(", ");
		}
		j++;
	}
	putchar('\n');
	return (0);
}
