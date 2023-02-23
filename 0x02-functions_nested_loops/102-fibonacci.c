#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	int i;

	long j = 1;

	long k = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;

			j = k - j;

			printf(", %ld", k);
		}
	}

	printf("\n");

	return (0);
}
