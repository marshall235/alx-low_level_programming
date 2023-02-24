#include <stdio.h>

/**
 * main - prints lowercase alphabet letters in reverse
 *
 * Return: is zero
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
