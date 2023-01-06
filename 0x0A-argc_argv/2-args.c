#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments given to the program
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
