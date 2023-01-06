#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments given to the program
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, lav = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 1; j < argc; j++)
	{
		lav *= atoi(argv[j]);
	}
	printf("%d\n", lav);
	return (0);
}
