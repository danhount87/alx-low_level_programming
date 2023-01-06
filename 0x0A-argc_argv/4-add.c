#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: arguments given to the program.
 * @argv: array of pointers.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int j, sm, nm;

	sm = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (j = 0; argv[argc][j] != '\0'; j++)
		{	
			if (!(isdigit(argv[argc][j])))
			{
				printf("Error\n");
				return (1);
			}
		}

		nm = atoi(argv[argc]);
		sm += nm;
	}
	printf("%d\n", sm);
	return (sm);
}
