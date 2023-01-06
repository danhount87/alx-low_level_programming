#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: arguments given to the program.
 * @argv: array of pointers.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nm, dgt, sm = 0;

	for (nm = 1; nm < argc; nm++)
	{
		for (dgt = 0; argv[num][dgt]; dgt++)
		{
			if (argv[nm][dgt] < '0' || argv[nm][dgt] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sm += atoi(argv[nm]);
	}

	printf("%d\n", sm);

	return (0);
}
