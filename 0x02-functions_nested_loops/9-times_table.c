#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, s;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
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
