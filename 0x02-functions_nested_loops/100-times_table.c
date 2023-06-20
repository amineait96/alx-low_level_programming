#include "main.h"

/**
 * print_times_table - check the code
 *
 * @n : check the input
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, s;

	for (i = 0; i <= n; i++)
	{
		_putchar(48);

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			s = i * j;

			if (s <= 9)
				_putchar(' ');
			else
				_putchar((s / 10) + 48);
			_putchar((s % 10) + 48);
		}
		_putchar('\n');
	}
}
