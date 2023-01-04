#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: integer pointer
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (ctrl_prime(n, 2));
}

/**
 * ctrl_prime - verify the numbers inf to n
 * @m: integer pointer
 * @lim: integer pointer
 * Return: integer number
 */

int ctrl_prime(int m, int lim)
{

	if (lim >= m && m > 1)
		return (1);
	else if (m % lim == 0 || m <= 1)
		return (0);
	else
		return (ctrl_prime(m, lim + 1));
}
