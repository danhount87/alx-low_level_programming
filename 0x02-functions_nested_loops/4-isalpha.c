#include "main.h"

/**
 * _isalpha - Entry point
 * Our function checks for alphabetic character.
 * @c : this character will be checked
 * return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= '97' && c <= '122') || (c >= '65' && c <= '90'));
}
