#include "main.h"

/**
 * print_last_digit - prints the last digit of number
 * @n: number whose last digit is to be printed
 *
 * Return: is n % 10
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');
	return (l);
}
