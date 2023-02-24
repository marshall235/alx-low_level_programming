#include <stdio.h>

/**
 * main - prints all possible combinations of to digits
 *
 * Return: is 0
 */
int main(void)
{
	int a;
	int c;

	for (a = 0; a < 9; a++)
	{
		for (c = a + 1; c < 10; c++)
		{
			putchar(a + '0');
			putchar(c + '0');

			if (a == 8 && c == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
