#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int j;

	for (c = 'A'; c <= 'Z'; c++;)
	{
		if (j == c)
			return (1);
		else
			return (0);

	}
}
