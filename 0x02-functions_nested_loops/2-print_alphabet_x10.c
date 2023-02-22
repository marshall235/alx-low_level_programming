#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: is void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		char c;

		while (c <= 'z')
		{
			c++;

			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}
