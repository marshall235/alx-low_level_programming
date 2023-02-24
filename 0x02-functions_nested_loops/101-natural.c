#include <stdio.h>

/**
 * main - prints the sum of multipples of 3 or 5 below 1024
 *
 * Return: is zero
 */

int main(void)
{
	int n;
	int j;

	j = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			j += n;
		}
	}
	printf("%d\n", j);

	return (0);
}
