#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n :check the input
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
