#include "main.h"

/**
 * more_numbers - prints 10 times the number 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');

			j++;
		}

		_putchar('\n');
		n++;
	}
}
