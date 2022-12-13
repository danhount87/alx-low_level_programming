#include "main.h"

/**
 * _isalpha - Entry point
 * function checks for alphabetic character.
 * @c : character to be checked
 * return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
