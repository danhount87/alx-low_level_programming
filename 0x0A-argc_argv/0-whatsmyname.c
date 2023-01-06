#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argument given to the program
 * @argv: array of pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
