#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: is 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar('a' + i - 10);
		}
	}

	return (0);
}
