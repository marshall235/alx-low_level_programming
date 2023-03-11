#include "main.h"
#include <stdio.h>

/**
 * main - prints all  arguments it has  followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: is 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
