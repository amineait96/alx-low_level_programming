#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, a, b, c;

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;
		c = i % 15;

		if (a == 0 && b != 0 && c != 0)
			printf("Fizz ");
		else if (a != 0 && b == 0 && c != 0)
			printf("Buzz ");
		else if (a == 0 && b == 0 && c == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
