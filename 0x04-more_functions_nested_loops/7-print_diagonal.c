#include "main.h"

/**
 * print_diagnol - draws a straight line in the terminal
 * @n: number of times n should be printed
 *
 * Return: is 0
 */

void print_diagnol(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
