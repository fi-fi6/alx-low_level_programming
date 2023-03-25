#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: the character to check
 * Return: 1 (on success).
 * Otherwise 0 on error.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


