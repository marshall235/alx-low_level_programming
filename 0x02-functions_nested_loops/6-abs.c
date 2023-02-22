#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: number to be checked
 *
 * Return: is zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;

		return (abs);
	}

	return (0);
}
