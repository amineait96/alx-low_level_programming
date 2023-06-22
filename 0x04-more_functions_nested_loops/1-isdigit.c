#include "main.h"

/**
 * _isupper - check the code.
 *
 * @c :check input
 *
 * Return: 1 if c is uppercase and 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}
