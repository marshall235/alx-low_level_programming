#include <stdio.h>

/**
 * main - prints possible combinations of three digits
 *
 * Return: is zero
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
