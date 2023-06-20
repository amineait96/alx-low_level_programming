#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @n : check the input
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	_putchar(ld);
	return (ld);
}
