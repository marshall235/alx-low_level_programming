#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string
 *	to uppercase
 * @n: string variable
 * Return: a character variable
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
			n[i] -= 32;
	}

	return (n);
}
