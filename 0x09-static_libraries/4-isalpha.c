#include "main.h"

/**
 * _isalpha- checks for alphabet character
 * @c: the character to be checked
 * return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'));
}
