#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: arguments given to the program.
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int lav, k;

	k = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	lav = atoi(argv[1]);
	if (lav < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (lav % 25 >= 0)
	{
		k += lav / 25;
		lav = lav % 25;
	}
	if (lav % 10 >= 0)
	{
		k += lav / 10;
		lav = lav % 10;
	}
	if (lav % 5 >= 0)
	{
		k += lav / 5;
		lav = lav % 5;
	}
	if (lav % 2 >= 0)
	{
		k += lav / 2;
		lav = lav % 2;
	}
	if (lav % 1 >= 0)
	{
		k += lav / 1;
	}
	printf("%d\n", k);
	return (0);
}
