#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: check this character
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
