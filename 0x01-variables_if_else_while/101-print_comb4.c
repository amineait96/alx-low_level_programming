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
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			int c = 0;

			while (c <= 9)
			{
				if (a != b && a != c && b != c && a < b && a < b && b < c)
				{
					int d = 0;

					d = a + b + c;
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (d != 24)
					{
						 putchar(',');
						 putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}

	putchar('\n');
	return (0);
}
