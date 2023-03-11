#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it followedi by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: is 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
