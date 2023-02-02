#include "main.h"
/* @zinzinpolice */
/**
 * binary_to_uint - function that converts a binary number
 * @b: pointing to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int de_vl = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		de_vl = 2 * de_vl + (b[j] - '0');
	}
	return (de_vl);
}
