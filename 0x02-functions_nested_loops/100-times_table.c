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

	if (n <= 15 && n >= 0)
	{
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
				if (s <= 99)
					_putchar(' ');
				if (s >= 100)
				{
					_putchar((s / 100) + 48);
					_putchar((s / 10) % 10 + 48);
				}
				else if (s <= 99 && s >= 10)
					_putchar((s / 10) + 48);
				_putchar((s % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
