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
		for (j = 0; j <= 9; j++)
		{
			s = i * j;
			if (
			_putchar((s / 10) + 48);
			_putchar((s % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
