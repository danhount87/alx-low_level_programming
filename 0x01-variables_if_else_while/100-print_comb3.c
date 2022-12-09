#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Our program prints all possible different
 * combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int b;
	int e = 0;

	while (e < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (e != b && e < b)
			{
				putchar('0' + e);
				putchar('0' + b);

				if (b + e != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
