#include "main.h"

/**
 *_islower - fonction that check the ascii code of the character c
 * and see if is lowercase
 *
 *@c : check input of fonction
 *
 * Return: Always 1 if the character c is lower.
 * retturn 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
