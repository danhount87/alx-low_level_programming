#include "function_pointers.h"
/* @zinzinpolice */
/**
 * print_name - function that prints a name
 * @name: string to add to the name
 * @f: pointer to void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
