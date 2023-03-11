#include "main.h"
#include <stdio.h>

/**
 * main - prints a programs name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: is 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
