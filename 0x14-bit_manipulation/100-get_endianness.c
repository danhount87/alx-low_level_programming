#include "main.h"
/* @zinzinpolice */
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void);
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
