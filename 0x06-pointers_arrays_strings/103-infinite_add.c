#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer paramater
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of = 0, i = 0, j = 0, dts = 0;
	int val1 = 0, val2 = 0, tp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || of == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tp_tot = val1 + val2 + of;
		if (tp_tot >= 10)
			of = 1;
		else
			of = 0;
		if (dts >= (size_r - 1))
			return (0);
		*(r + dts) = (tp_tot % 10) + '0';
		dts++;
		j--;
		i--;
	}
	if (dts == size_r)
		return (0);
	*(r + dts) = '\0';
	rev_string(r);
	return (r);
}
