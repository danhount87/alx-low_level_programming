#include "main.h"
/* @zinzinpolice */
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cnt = 0;
	unsigned long int cent;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cent = exclusive >> j;
		if (cent & 1)
			cnt++;
	}
	return (cnt);
}
