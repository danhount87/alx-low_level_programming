#include "main.h"

/**
 * _isalpha - Entry point
 * Our function checks for alphabetic character.
 * @c : this character will be checked
 * return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
