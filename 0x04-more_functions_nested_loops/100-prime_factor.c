#include <stdio.h>

/**
 * main - prime factors
 * Return: 0
 */

int main(void)
{
	long int a = 612852475143;
	long int b;

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%ld\n", b);
	return (0);
}
