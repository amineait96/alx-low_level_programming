#include "main.h"

/**
 * print_to_98 - check the code
 *
 *@n : check the input
 * Return : void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 10 )+ 48);
			_putchar((i % 10) + 48);
		}
	}
	else
	{
		for (i = n; i <= 98; i--)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}
