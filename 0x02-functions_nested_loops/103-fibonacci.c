#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0, d = 1, nt = 0;
	int s = 0;

	while (nt < 4000000)
	{
		nt = c + d;
		c = d;
		d = nt;
		if (nt % 2 == 0)
			s += nt;
	}
	printf("%i\n", s);
	return (0);
}
