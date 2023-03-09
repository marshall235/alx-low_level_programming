#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: The number whose factorial should be returned
 * Return: factoria of a given number
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);

	else if (n < 2)
		return (n);

	fact = n * factorial(n - 1);

	return (fact);
}
