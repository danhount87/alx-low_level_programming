#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: integer pointer
 * Return: integer number
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the square root
 * @n: integer to find the square root
 * @arl: square root
 * Return: integer number
 */

int square(int n, int arl)
{

	if (arl * arl == n)
		return (arl);
	else if (arl * arl < n)
		return (square(n, arl + 1));
	else
		return (-1);

}
