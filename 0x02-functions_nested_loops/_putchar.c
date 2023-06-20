#include <unistd.h>
#include "main.h"

/**
 * _putchar - writing and printing fonction the charcter c
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
