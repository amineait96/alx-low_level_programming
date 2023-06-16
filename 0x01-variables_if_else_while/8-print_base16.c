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
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i = i + 39;
		i++;
	}
	putchar('\n');
	return (0);
}
