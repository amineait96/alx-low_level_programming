#include "main.h"

/**
 * _isdigit - check the code.
 *
 * @c :check input
 *
 * Return: 1 if c is uppercase and 0 otherwise
 *
 */

int _isdigit(int c)
{
	int i = 0;
	i = c + 48;
	if (i >= 48 && i <= 57)
		return (1);
	return (0);

}
