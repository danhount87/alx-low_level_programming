#include "main.h"
/* @zinzinpolice */
/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 * @n: number to search
 * @index: index of the bit
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt_va;

	if (index > 63)
		return (-1);

	bt_va = (n >> index) & 1;
	return (bt_va);
}
