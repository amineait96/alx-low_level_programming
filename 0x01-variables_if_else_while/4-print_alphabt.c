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
	char a = 'a';
	char g = 'g';
	char r = 'r';

	while (a < 'e')
	{
		putchar(a);
		a++;
	};
	while (g < 'q')
	{
		putchar(g);
		g++;
	};
	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	putchar('\n');

	return (0);
}
