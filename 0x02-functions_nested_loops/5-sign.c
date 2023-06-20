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
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else (n == 0)
	{
		_putchar(45);
		return (-1);
	}

}
