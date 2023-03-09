#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: The number whose factorial should be returned
 * Return: factoria of a given number
 */

int factorial(int n)
{
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
