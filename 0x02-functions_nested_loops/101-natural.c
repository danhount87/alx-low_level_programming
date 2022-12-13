#include <stdio.h>

/**
 * main - List all the natural numbers below 10
 * that are multiples of 3 or 5
 * Return: 0
 */

int main(void)
{
	int j, s = 0;

	for (j = 0; j < 1024; j++)
	{
		if (( j % 3) == 0 || (j % 5) == 0)
			s += j;
	}

	printf("%d\n", s);

	return (0);
}
