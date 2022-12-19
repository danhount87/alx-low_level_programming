#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid
 * passwords for the program 101-crackme
 * Return: 0
 */

int main(void)
{
	int j, sm, k;
	int ps[100];

	sm = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		ps[j] = rand() % 78;
		sm += (ps[j] + '0');
		putchar(ps[j] + '0');
		if ((2772 - sm) - '0' < 78)
		{
			k = 2772 - sm - '0';
			sm += k;
			putchar(k + '0');
			break;
		}
	}

	return (0);
}
