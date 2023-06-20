#include "main.h"

/**
 *_abs - fonction that print the absolut value of n
 *
 *@n : check the input
 *
 *Return: Always 0 (succes).
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);

}
