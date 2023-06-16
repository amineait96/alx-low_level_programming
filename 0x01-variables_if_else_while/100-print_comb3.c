#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
	int y = 0;

		while (y <= 9)
		{
			if (y != i && i < y)
			{
				putchar(i + 48);
				putchar(y + 48);
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
