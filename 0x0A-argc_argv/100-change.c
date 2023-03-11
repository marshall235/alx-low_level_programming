#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an
 *	amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int total, count;

	unsigned int i;
	int cents[] = {25, 10, 5, 2, 1};

	if (arc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	count = 0;

	while (total > 1)
	{
		for (i = 0; i < sizeof(cents[i]); i++)
		{
			if (total >= cent[i])
			{
				count += total / cent[i];
				total = total % cents[i];
			}
		}
	}

	if (total == 1)
		count++;

	printf("%d\n", count);
	return (0);
}
