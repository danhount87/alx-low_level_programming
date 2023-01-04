#include "main.h"

/**
 * lt_ind - returns the last index of a string
 * @s: pointer the string
 * Return: integer
 */

int lt_ind(char *s)
{
	int m = 0;

	if (*s > '\0')
		m += lt_ind(s + 1) + 1;

	return (m);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int ed = lt_ind(s);

	return (vef(s, 0, ed - 1, ed % 2));
}

/**
 * vef - checker for the palindrome
 * @s: string
 * @deb: integer from right to left
 * @ed: integer from left to right
 * @pr: integer pointer
 * Return: 0 or 1
 */

int vef(char *s, int deb, int ed, int pr)
{

	if ((deb == ed && pr != 0) || (deb == ed + 1 && pr == 0))
		return (1);
	else if (s[deb] != s[ed])
		return (0);
	else
		return (vef(s, deb + 1, ed - 1, pr));
}
