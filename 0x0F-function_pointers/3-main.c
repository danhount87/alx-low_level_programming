#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/* @zinzinpolice */
/**
 * main - Prints the result.
 * @argc: The number of arguments
 * @argv: An array of pointers
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numb1, numb2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numb1 = atoi(argv[1]);
	op = argv[2];
	numb2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && numb2 == 0) || (*op == '%' && numb2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(numb1, numb2));
	return (0);
}
