#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and
 *	initializes it with a specific char
 * @size: integer variable
 * @c: character to be initialized
 * Return: A pointer to the array, or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int i;


	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
