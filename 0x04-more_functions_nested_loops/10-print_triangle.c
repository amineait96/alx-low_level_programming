#include "main.h"

/**
 * print_triangle - check the code
 *
 * @size : check input
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j, l;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = (size - 1); j >= i; j--)
				_putchar(32);
			for (l = 1; l <= i; l++)
				_putchar(35);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
