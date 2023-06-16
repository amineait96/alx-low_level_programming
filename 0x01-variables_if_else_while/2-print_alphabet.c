#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alfa[] = 'abcdefghijklmnopqrstuvwxyz';

	for (int i = 0 ; i <= 28 ; i++)
	{
		putchar("%c", alfa[i]);

	};

	return (0);
}
