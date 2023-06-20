#include "main.h"

/**
 *print_sign - fonction that check and print the sign of n
 *
 * @n : check the input of fonction
 *
 * Return: Always 1 if the character c is lower.
 * retturn 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n == 0)
	{
		_putchar('-');
		return (-1);
	}

}
