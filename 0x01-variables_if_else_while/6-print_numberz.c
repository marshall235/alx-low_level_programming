#include <stdio.h>

/**
 * main - prints single digits of base 10 starting from 0
 *
 * Return: is zero
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}

	putchar('\n');

	return (0);
}
