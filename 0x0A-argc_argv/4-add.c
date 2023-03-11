#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int total, i, j;
	int num;

	total = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
				printf("Error\n");
				return (1);
				}
			}

			num = atoi(argv[i]);
			total += num;
		}

	}

	printf("%d\n", total);
	return (0);
}
