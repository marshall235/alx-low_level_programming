#include "main.h"

/**
 * _puts - a function that prints a string to stdout
 * @str: string variable
 * Return: is void
 */

void _puts(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
