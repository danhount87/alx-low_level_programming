/* @zinzinpolice */
#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 */

int _atoi_digit(char x)
{
	unsigned int rs;

	if (x <= '9' && x >= '0')
		rs = x - '0';
	return (rs);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 */

int _isNumber(char *argv)
{
	int j;

	for (j = 0; argv[j]; j++)
		if (argv[j] < 48 || argv[j] > 57)
			return (1);
	return (0);
}

/**
 * _calloc - allocate array of size * nmemb
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *bat;
	unsigned int j;

	bat = malloc(size * nmemb);

	if (bat == NULL)
		return (NULL);

	for (j = 0; j < (size * nmemb); j++)
		tab[j] = '0';

	return (bat);
}

/**
 * mul_array - multiply two arrays
 * @a1: first array
 * @len1: length of array a1
 * @a2:  char
 * @a3: array for result
 * @lena: length of array a3
 * Return: pointer to array
 */

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int ml = 0, j, k;

	k = lena;
	for (j = len1 - 1; j >= 0 ; j--)
	{
		ml += (a1[j] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (ml % 10) + '0';
		ml /= 10;
		k--;
	}

	while (ml != 0)
	{
		ml += a3[k] - '0';
		a3[k] = (ml % 10) + '0';
		ml /= 10;
		k--;
	}

	return (a3);
}

/**
 * print_array - print all digits of array
 * @nb: number of elements to print
 * @a: array of elements
 */

void print_array(char *a, int nb)
{
	int j = 0;

	while (a[j] == '0' && (j + 1) < nb)
	{
		j++;
	}
	for (; j < nb; j++)
	{
		_putchar(a[j]);
	}
	_putchar('\n');
}

/**
 * main - print the multiplication of 2 numbers
 * @argc: array length
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, b, ln1, ln2, lenes;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabrs;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (j = 0; j < 6; j++)
		{
			_putchar(E[j]);
		}
		exit(98);
	}
	for (ln1 = 0; argv[1][ln1]; ln1++)
		;
	for (ln2 = 0; argv[2][ln2]; ln2++)
		;
	lenes = ln1 + ln2;
	tabrs = _calloc(lenes, sizeof(int));
	if (tabrs == NULL)
	{
		free(tabrs);
		return (0);
	}
	for (j = ln2 - 1, b = 0; j >= 0; j--)
	{
		tabrs = mul_array(argv[1], ln1, argv[2][j], tabrs, (lenes - 1 - b));
		b++;
	}
	print_array(tabrs, lenes);
	free(tabrs);
	exit(EXIT_SUCCESS);
	return (0);
}
