#include <stdio.h>

/**
 * main - main block
 * Print the first 50 fibonacci numbers
 * return: 0
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
