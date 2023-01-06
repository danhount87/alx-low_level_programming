#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: arguments given to the program.
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
